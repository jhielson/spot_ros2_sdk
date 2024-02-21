# Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
#
# Downloading, reproducing, distributing or otherwise using the SDK Software
# is subject to the terms and conditions of the Boston Dynamics Software
# Development Kit License (20191101-BDSDK-SL).

import argparse

from audio import AudioCommands
from compositor import CompositorCommands
from health import HealthCommands
from lighting import LightingCommands
from media_log import MediaLogCommands
from network import NetworkCommands
from power import PowerCommands
from ptz import PtzCommands
from streamquality import StreamQualityCommands
from utils import UtilityCommands
from version import VersionCommands
from webrtc import WebRTCCommands

import bosdyn.client
from bosdyn.client import spot_cam
from bosdyn.client.util import add_base_arguments, setup_logging

import rclpy
from rclpy.node import Node

class CommandWrapper(Node):
    def __init__(self):
        super().__init__("command_wrapper")
        self.get_logger().info("This node works between ros2 and the spot sdk.")

    def run(self, robot, cmd_dict):
        # Camera
        #options.camera_name = 'pano'
        #options.command = 'media_log'
        #options.hostname = '192.168.80.3'
        #options.media_log_command = 'store' 
        #options.verbose = False

        # Light
        options.brightnesses = ['0.0', '0.0', '0.0', '0.0']
        #options.brightnesses = ['1.0', '1.0', '1.0', '1.0']
        options.command = 'lighting'
        options.hostname = '192.168.80.3'
        options.lighting_command = 'set'
        options.verbose = False

        setup_logging(verbose=options.verbose)

        result = cmd_dict.run(robot, options)
        print(result)
        if args is None and result is not None:
            # Invoked as a CLI, so print result
            print(result)

        return result


def register_all_commands(subparsers, command_dict):
    COMMANDS = [
        AudioCommands,
        CompositorCommands,
        HealthCommands,
        LightingCommands,
        MediaLogCommands,
        NetworkCommands,
        PowerCommands,
        PtzCommands,
        StreamQualityCommands,
        UtilityCommands,
        VersionCommands,
        WebRTCCommands
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

    #options = parser.parse_args(args=args)
    options = argparse.Namespace()

    # Create robot object and authenticate.
    sdk = bosdyn.client.create_standard_sdk('Spot CAM Client')
    spot_cam.register_all_service_clients(sdk)
    robot = sdk.create_robot(options.hostname)
    cmd_dict = command_dict[options.command]
    setup_logging(verbose=options.verbose)

    # ROS2
    rclpy.init(args=args)
    node = CommandWrapper()
    rclpy.spin(node)
 
    # Loop
    node.run(robot,cmd_dict)

    # Kill and shutdown
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
