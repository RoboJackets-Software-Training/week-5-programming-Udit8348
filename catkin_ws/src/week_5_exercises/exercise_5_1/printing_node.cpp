#include <ros/ros.h>
#include <string>

void print_value(const std::string& str){
    ROS_INFO_STREAM(str);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "printing_node");
    ros::NodeHandle p_nh = ros::NodeHandle("~");
    
    std::string s;
    p_nh.getParam("print_message", s);

    int number;
    p_nh.getParam("print_times", number);

    for (int i=0; i<number; i++){
        print_value(s);
    }
}