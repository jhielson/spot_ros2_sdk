# Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
#
# Downloading, reproducing, distributing or otherwise using the SDK Software
# is subject to the terms and conditions of the Boston Dynamics Software
# Development Kit License (20191101-BDSDK-SL).

import argparse, os.path

from .submodules.media_log import MediaLogCommands

import bosdyn.client
from bosdyn.client import spot_cam
from bosdyn.client.util import add_base_arguments, setup_logging

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from create_message_types.srv import Camera

from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

class CommandImageSaveWrapper(Node):
    def __init__(self,hostname, robot, command_dict):
        super().__init__("command_image_record_wrapper")
        self.get_logger().info("This node works between ros2 and the spot sdk: Image - save.")
        self.hostname = hostname
        self.robot = robot
        self.command_dict = command_dict

        # ROS2 - services
        self.camera_save_srv = self.create_service(Camera, "camera_save", self.camera_save_callback)


    def camera_save_callback(self,request,response):
        # Details
        options = argparse.Namespace()
        options.command = request.command
        options.hostname = request.hostname
        options.camera_name = request.camera_name
        options.media_log_command = request.media_log_command
        options.save_as_rgb24 = request.save_as_rgb24
        options.stitching = request.stitching
        options.raw_ir = request.raw_ir
        options.dst = request.dst + str(self.get_clock().now().nanoseconds)
        options.verbose = request.verbose

        print("> Camera requested received")

        # Run
        result = self.run(options)

        print(result)

        print("= Camera: Done")

        if os.path.isfile(options.dst+".jpg"):
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> SUCCESS")
            response.result = True
        else:
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> FAILED")
            response.result = False

        return response

    def run(self,options):
        cmd_dict = self.command_dict[options.command]
        setup_logging(verbose=options.verbose)
        result = cmd_dict.run(self.robot, options)
        return result


def register_all_commands(subparsers, command_dict):
    COMMANDS = [
        #AudioCommands,
        #CompositorCommands,
        #HealthCommands,
        #LightingCommands,
        MediaLogCommands,
        #NetworkCommands,
        #PowerCommands,
        #PtzCommands,
        #StreamQualityCommands,
        #UtilityCommands,
        #VersionCommands,
        #WebRTCCommands
    ]

    for register_command in COMMANDS:
        register_command(subparsers, command_dict)

def main(args=None):
    """Command-line interface for interacting with Spot CAM"""
    parser = argparse.ArgumentParser(prog='bosdyn.api.spot_cam_image_save', description=main.__doc__)
    add_base_arguments(parser)

    command_dict = {}  # command name to fn which takes parsed options
    subparsers = parser.add_subparsers(title='commands', dest='command')
    subparsers.required = True
    register_all_commands(subparsers, command_dict)

    # Create robot object and authenticate.
    sdk = bosdyn.client.create_standard_sdk('Spot CAM Client: image save')
    spot_cam.register_all_service_clients(sdk)
    hostname="192.168.80.3"
    robot = sdk.create_robot(hostname)
    setup_logging(verbose=False)

    # ROS2
    rclpy.init(args=args)
    node = CommandImageSaveWrapper(hostname,robot,command_dict)

    # Loop
    rclpy.spin(node)
    
    # Kill and shutdown
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
