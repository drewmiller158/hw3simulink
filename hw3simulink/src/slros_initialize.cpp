#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "hw3";

// For Block hw3/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_9;

// For Block hw3/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_10;

// For Block hw3/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_11;

// For Block hw3/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Pub_hw3_8;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

