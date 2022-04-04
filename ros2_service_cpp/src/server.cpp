#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ros2_custom_interfaces/srv/custom_srv.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class Server : public rclcpp::Node
{
public:
    Server(): Node("server")
    {
        number_service_ = this->create_service<ros2_custom_interfaces::srv::CustomSrv>(
            "change_number", std::bind(&Server::callback, this, _1, _2)
        );
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
            std::bind(&Server::print_number, this)
        );
        RCLCPP_INFO(this->get_logger(), "Hello From ROS2 Service Server!!");
    }

private:
    void print_number()
    {
        RCLCPP_INFO(this->get_logger(), "Counter : %d", this->number_);
    }

    void callback(const ros2_custom_interfaces::srv::CustomSrv::Request::SharedPtr request, 
                const ros2_custom_interfaces::srv::CustomSrv::Response::SharedPtr response)
    {
        this->number_ = request->number;
        response->success = true;
    }

    int number_ = 5;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Service<ros2_custom_interfaces::srv::CustomSrv>::SharedPtr number_service_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<Server>();
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}