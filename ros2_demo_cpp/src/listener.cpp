#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class Listener : public rclcpp::Node
{
public:
    Listener(): Node("listener")
    {
        subscriber_ = this->create_subscription<std_msgs::msg::String>("message", 10, std::bind(&Listener::callback, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Hello From ROS2 Listener!!");
    }

private:
    void callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), msg->data);
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<Listener>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}