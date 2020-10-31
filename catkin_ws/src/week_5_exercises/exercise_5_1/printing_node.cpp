#include <ros/ros.h>
#include <string>

void print_value(const std::string& str){
    ROS_INFO_STREAM(str);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "printing_node");
    // ros::init(argc, argv, "printing_node.cpp");
    ros::NodeHandle p_nh = ros::NodeHandle("~");

    for (int i=0; i<5; i++){
        print_value("You should see this 5 times!");
    }
}