from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='spot_cam_ros2',
            executable='commandImageRecord',
            name='video'
        ),
        Node(
            package='spot_cam_ros2',
            executable='commandImageSave',
            name='image'
        ),
        Node(
            package='spot_cam_ros2',
            executable='command',
            name='commands',
        ),
        Node(
            package='spot_cam_ros2',
            executable='srv',
            name='example_payload_demo',
        ),
        Node(
            package='spot_velodyne_ros2',
            executable='velodyne_node',
            name='velodyne'
        )
    ])
