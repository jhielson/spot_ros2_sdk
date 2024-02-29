from setuptools import find_packages, setup

package_name = 'spot_cam_ros2'
submodules = 'spot_cam_ros2/submodules'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name,submodules],
    #packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'srv=spot_cam_ros2.example_srv:main',
            'command=spot_cam_ros2.command_line:main',
            'commandImageRecord=spot_cam_ros2.command_image_record:main',
            'commandImageSave=spot_cam_ros2.command_image_save:main'
        ],
    },
)
