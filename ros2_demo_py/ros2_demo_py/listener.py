#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64, String

class Listner(Node):
    def __init__(self):
        super().__init__("ROS2_Listener")

        self.subscriber_ = self.create_subscription(String, "message", self.callback, 10)
        # self.timer_ = self.create_timer(0.5, self.publish_msg)

        self.get_logger().info("Hello From ROS2 Listener!!")

    def callback(self, msg):
        self.get_logger().info("Message: " + str(msg.data))


def main():
    rclpy.init()
    node = Listner()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()