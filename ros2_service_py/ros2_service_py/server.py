#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_custom_interfaces.srv import CustomSrv

class Server(Node):
    def __init__(self):
        super().__init__("ROS2_Service_Server")

        self.number = 5

        self.counter_service_ = self.create_service(CustomSrv, "change_number", self.callback)
        self.timer_ = self.create_timer(0.5, self.print_number)
        self.get_logger().info("Hello From ROS2 Service Server!!")

    def print_number(self):
        self.get_logger().info("Current number : " + str(self.number))

    def callback(self, request, response):
        self.number = request.number
        response.success = True
        return response


def main():
    rclpy.init()
    node = Server()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()