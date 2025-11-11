from setuptools import find_packages, setup

package_name = 'logitech_streamer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mrs_lab',
    maintainer_email='mrs_lab@todo.todo',
    description='ROS2 node to stream Logitech joystick input to a topic for Arduino control.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            # Register the node script as an executable
            'logitech_input_publisher = logitech_streamer.logitech_input_publisher:main',
        ],
    },
)
