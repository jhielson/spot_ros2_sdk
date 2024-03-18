# Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
#
# Downloading, reproducing, distributing or otherwise using the SDK Software
# is subject to the terms and conditions of the Boston Dynamics Software
# Development Kit License (20191101-BDSDK-SL).

import argparse
import collections
import logging
import sys
import threading
import time

import matplotlib
import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

import bosdyn
import bosdyn.client
import bosdyn.client.util
from bosdyn.client.async_tasks import AsyncPeriodicQuery, AsyncTasks
from bosdyn.client.frame_helpers import get_odom_tform_body
from bosdyn.client.math_helpers import Quat, SE3Pose
from bosdyn.client.robot_state import RobotStateClient

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
from std_msgs.msg import Header

LOGGER = logging.getLogger(__name__)

def _update_thread(async_task):
    while True:
        async_task.update()
        time.sleep(0.01)

class AsyncPointCloud(AsyncPeriodicQuery):
    """Grab Point Cloud state."""

    def __init__(self, robot_state_client):
        super(AsyncPointCloud, self).__init__('point_clouds', robot_state_client, LOGGER,
                                              period_sec=0.001)

    def _start_query(self):
        return self._client.get_point_cloud_from_sources_async(['velodyne-point-cloud'])


class AsyncRobotState(AsyncPeriodicQuery):
    """Grab robot state."""

    def __init__(self, robot_state_client):
        super(AsyncRobotState, self).__init__('robot_state', robot_state_client, LOGGER,
                                              period_sec=0.2)

    def _start_query(self):
        return self._client.get_robot_state_async()

class AdapterVLP16(Node):
    def __init__(self):
        super().__init__("adapter_vlp16")
        self.get_logger().info("This node works between velodyne vlp16 and PointCloud2")
        
        # ROS - publisher
        self.pub_pointCloud = self.create_publisher(PointCloud2, "point_cloud2", 10)
        self.points = []
    
    def run(self, robot):
        # Point Cloud
        _point_cloud_client = robot.ensure_client('velodyne-point-cloud')
        _robot_state_client = robot.ensure_client(RobotStateClient.default_service_name)
        _point_cloud_task = AsyncPointCloud(_point_cloud_client)
        _robot_state_task = AsyncRobotState(_robot_state_client)
        _task_list = [_point_cloud_task, _robot_state_task]
        _async_tasks = AsyncTasks(_task_list)
        print('Connected.')
        update_thread = threading.Thread(target=_update_thread, args=[_async_tasks])
        update_thread.daemon = True
        update_thread.start()

        # Wait for the first responses.
        while any(task.proto is None for task in _task_list):
            time.sleep(0.1)

        # Data
        aggregate_data = collections.deque(maxlen=5)
        while True:
            self.points = []
            if _point_cloud_task.proto[0].point_cloud:
                data = np.fromstring(_point_cloud_task.proto[0].point_cloud.data, dtype=np.float32)
                aggregate_data.append(data)
                plot_data = np.concatenate(aggregate_data)
                #print((plot_data[0::3]))
                #print((plot_data[1::3]))
                #print((plot_data[2::3]))
                for i in range(len(plot_data[0::3])):
                    pt = [plot_data[i*3], plot_data[i*3+1], plot_data[i*3+2]]
                    self.points.append(pt)
                
            self.data = np.array(self.points)
            dtype = np.float32            
            data = self.data.astype(dtype).tobytes() 

            x = PointField()
            x.name = "x"
            x.offset = 0
            x.datatype = PointField.FLOAT32
            x.count = 1

            y = PointField()
            y.name = "y"
            y.offset = 4
            y.datatype = PointField.FLOAT32
            y.count = 1

            z = PointField()
            z.name = "z"
            z.offset = 8
            z.datatype = PointField.FLOAT32
            z.count = 1

            fields = [x, y, z]

            header = Header(frame_id="odom")
            msg = PointCloud2(header=header,
                        height=1,
                        width=self.data.shape[0],
                        is_dense=False,
                        is_bigendian=False,
                        fields=fields,
                        point_step=12, # (4 * 3) Every point consists of three float32s.
                        row_step=(12 * self.data.shape[0]),
                        data=data
            )

            self.pub_pointCloud.publish(msg)
            

def main():
    # SDK
    sdk = bosdyn.client.create_standard_sdk('VelodyneClient')
    robot = sdk.create_robot("192.168.80.3")
    bosdyn.client.util.authenticate(robot)
    robot.sync_with_directory()

    '''
    _point_cloud_client = robot.ensure_client('velodyne-point-cloud')
    _robot_state_client = robot.ensure_client(RobotStateClient.default_service_name)
    _point_cloud_task = AsyncPointCloud(_point_cloud_client)
    _robot_state_task = AsyncRobotState(_robot_state_client)
    _task_list = [_point_cloud_task, _robot_state_task]
    _async_tasks = AsyncTasks(_task_list)
    print('Connected.')

    update_thread = threading.Thread(target=_update_thread, args=[_async_tasks])
    update_thread.daemon = True
    update_thread.start()

    # Wait for the first responses.
    while any(task.proto is None for task in _task_list):
        time.sleep(0.1)
    '''

    # ROS 2 
    rclpy.init()
    node = AdapterVLP16()
    node.run(robot)

    node.destroy_node()
    rclpy.shutdown()
 
if __name__ == '__main__':
    if not main():
        sys.exit(1)
