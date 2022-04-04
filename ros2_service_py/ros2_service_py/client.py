#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_custom_interfaces.srv import CustomSrv

class Client(Node):
    def __init__(self, target_number):
        super().__init__("ROS2_Service_Client")

        self.target_number = target_number

        '''
        Not Implemented

         -> Send target_number to /change_number service server
        '''

        self.get_logger().info("Hello From ROS2 Service Client!!")


def main():
    rclpy.init()
    node = Client(2)
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()