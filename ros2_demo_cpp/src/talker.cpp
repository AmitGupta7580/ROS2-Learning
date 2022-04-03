#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class Talker : public rclcpp::Node
{
public:
    Talker(): Node("talker")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("message", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Talker::publish_msg, this));
        RCLCPP_INFO(this->get_logger(), "Hello From ROS2 Talker!!");
    }

private:
    void publish_msg()
    {
        auto msg = std_msgs::msg::String();
        msg.data = "Hello World";
        publisher_->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<Talker>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}