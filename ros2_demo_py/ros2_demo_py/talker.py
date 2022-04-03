#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64, String

class Talker(Node):
    def __init__(self):
        super().__init__("ROS2_Talker")

        self.pub_ = self.create_publisher(String, "message", 10)
        self.timer_ = self.create_timer(0.5, self.publish_msg)

        self.get_logger().info("Hello From ROS2 Talker!!")

    def publish_msg(self):
        msg = String()
        msg.data = "Hello World"
        self.pub_.publish(msg)


def main():
    rclpy.init()
    node = Talker()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()