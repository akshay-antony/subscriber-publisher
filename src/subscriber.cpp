// Subscribes to the topic number via Int32MultiArray messages
#include "ros/ros.h"   
#include <stdlib.h>
#include "std_msgs/Int32MultiArray.h"
#include<stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int Arr[2];
void numCallBack(const std_msgs::Int32MultiArray::ConstPtr& arr)
{       
        int i = 0;
	// print all the remaining numbers
	for(std::vector<int>::const_iterator it = arr->data.begin(); it != arr->data.end(); ++it)
	{
		Arr[i] = *it;
		if(i==1)
		ROS_INFO_STREAM("Random Number Subscribed from topic "<< Arr[0]<<" " <<Arr[1]);
		++i;
	}

	return;
	
}
int main(int argc,char **argv)
{
	ros::init(argc,argv,"number_subscribtion");
	ros::NodeHandle n;
	ros::Subscriber num_sub=n.subscribe("number",1000,numCallBack);
    ros::spin();
}
