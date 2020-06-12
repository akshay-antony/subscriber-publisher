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
		ROS_INFO("%x", Arr[i]);
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