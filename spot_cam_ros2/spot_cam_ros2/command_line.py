# Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
#
# Downloading, reproducing, distributing or otherwise using the SDK Software
# is subject to the terms and conditions of the Boston Dynamics Software
# Development Kit License (20191101-BDSDK-SL).

import argparse

from .submodules.audio import AudioCommands
from .submodules.compositor import CompositorCommands
from .submodules.health import HealthCommands
from .submodules.lighting import LightingCommands
from .submodules.network import NetworkCommands
from .submodules.power import PowerCommands
from .submodules.ptz import PtzCommands
from .submodules.streamquality import StreamQualityCommands
from .submodules.utils import UtilityCommands
from .submodules.version import VersionCommands

import bosdyn.client
from bosdyn.client import spot_cam
from bosdyn.client.util import add_base_arguments, setup_logging

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

from create_message_types.srv import Light, CameraPTZ, Compositor, Audio

from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

class CommandWrapper(Node):
    def __init__(self,hostname, robot, command_dict):
        super().__init__("command_wrapper")
        self.get_logger().info("This node works between ros2 and the spot sdk.")
        self.hostname = hostname
        self.robot = robot
        self.command_dict = command_dict

        # ROS2 - services
        self.light_srv = self.create_service(Light, 'light', self.light_callback, callback_group = MutuallyExclusiveCallbackGroup())
        self.camera_ptz_srv = self.create_service(CameraPTZ, 'camera_ptz', self.camera_ptz_callback, callback_group = MutuallyExclusiveCallbackGroup())
        self.compositor_srv = self.create_service(Compositor, 'compositor', self.compositor_callback, callback_group = MutuallyExclusiveCallbackGroup())
        self.audio_srv = self.create_service(Audio, 'audio', self.audio_callback, callback_group = MutuallyExclusiveCallbackGroup())


    def audio_callback(self, request, response):
        # Details
        options = argparse.Namespace() 
        options.command = request.command
        options.hostname = request.hostname
        options.audio_command = request.audio_command
        options.percentage = request.percentage
        options.verbose = request.verbose

        print("> Audio requested received")

        # Run
        result = self.run(options)

        print("= Audio: Done")

        # Return
        if result == None:
            response.result = False
        else:
            response.result = True

        return response

    def compositor_callback(self, request, response):
        # Details
        options = argparse.Namespace()
        options.command = request.command
        options.hostname = request.hostname
        options.compositor_command = request.compositor_command
        options.name = request.name
        options.verbose = request.verbose
 
        print("> Compositor requested received")

        # Run
        result = self.run(options)
 
        print("= Compositor: Done")

        # Return
        if result == None:
            response.result = False
        else:
            response.result = True

        return response

    def camera_ptz_callback(self,request,response):
        # Details
        options = argparse.Namespace()
        options.pan = request.pan
        options.tilt = request.tilt
        options.zoom = request.zoom
        options.command = request.command
        options.hostname = request.hostname
        options.ptz_name = request.ptz_name
        options.ptz_command = request.ptz_command
        options.verbose = request.verbose
 
        print("> Camera PTZ requested received")

        # Run
        result = self.run(options)

        print("= Camera PTZ: Done")

        # Return
        if result == None:
            response.result = False
        else:
            response.result = True

        return response

    def light_callback(self,request,response):
        # Details
        options = argparse.Namespace()
        options.brightnesses = [request.brightnesses_01, request.brightnesses_02, request.brightnesses_03, request.brightnesses_04]
        options.command = request.command
        options.hostname = request.hostname
        options.lighting_command = request.lighting_command
        options.verbose = request.verbose

        print("> Light requested received")

        # Run
        result = self.run(options)
 
        print("= Light: Done")

        # Return
        if result == True:
            response.result = result
        else:
            response.result = False

        return response

    def run(self,options):
        cmd_dict = self.command_dict[options.command]
        setup_logging(verbose=options.verbose)
        result = cmd_dict.run(self.robot, options)
        return result


def register_all_commands(subparsers, command_dict):
    COMMANDS = [
        AudioCommands,
        CompositorCommands,
        HealthCommands,
        LightingCommands,
        NetworkCommands,
        PowerCommands,
        PtzCommands,
        StreamQualityCommands,
        UtilityCommands,
        VersionCommands#,
    ]

    for register_command in COMMANDS:
        register_command(subparsers, command_dict)

def main(args=None):
    """Command-line interface for interacting with Spot CAM"""
    parser = argparse.ArgumentParser(prog='bosdyn.api.spot_cam', description=main.__doc__)
    add_base_arguments(parser)

    command_dict = {}  # command name to fn which takes parsed options
    subparsers = parser.add_subparsers(title='commands', dest='command')
    subparsers.required = True
    register_all_commands(subparsers, command_dict)

    # Create robot object and authenticate.
    sdk = bosdyn.client.create_standard_sdk('Spot CAM Client')
    spot_cam.register_all_service_clients(sdk)
    hostname="192.168.80.3"
    robot = sdk.create_robot(hostname)
    setup_logging(verbose=False)

    # ROS2
    rclpy.init(args=args)
    node = CommandWrapper(hostname,robot,command_dict)

    # ROS2 - Multithread
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    # Loop
    executor.spin()

    # Kill and shutdown
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
