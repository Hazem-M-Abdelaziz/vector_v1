from setuptools import setup

package_name = 'rpi_controller'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mrs-rpi',
    maintainer_email='you@example.com',
    description='Raspberry Pi controller node that communicates with Arduino via serial and subscribes to Logitech input.',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'arduino_controller = rpi_controller.arduino_controller:main',
        ],
    },
)
