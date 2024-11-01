#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "hw3_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block hw3/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_9;

// For Block hw3/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_10;

// For Block hw3/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Sub_hw3_11;

// For Block hw3/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_hw3_std_msgs_Float64> Pub_hw3_8;

void slros_node_init(int argc, char** argv);

#endif
