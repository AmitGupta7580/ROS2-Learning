#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64, String

class Talker(Node):
    def __init__(self):
        super().__init__("ROS2_Talker")
        self.get_logger().info("Hello From ROS2 Talker!!")

def main():
    rclpy.init()
    node = Talker()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()