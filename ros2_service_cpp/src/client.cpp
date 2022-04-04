#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ros2_custom_interfaces/srv/custom_srv.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class Client : public rclcpp::Node
{
public:
    Client(): Node("client")
    {
        /*
        
        Not Implemented

         -> Send target_number_ to /change_number service server

        */
        RCLCPP_INFO(this->get_logger(), "Hello From ROS2 Service Client!!");
    }

private:
    int target_number_ = 6;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<Client>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}