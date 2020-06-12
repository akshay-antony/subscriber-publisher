   #include <stdio.h>
   #include <stdlib.h>
   #include<vector>
   #include<iostream>
   #include "ros/ros.h"
   #include "std_msgs/String.h"
   #include "std_msgs/Int32MultiArray.h"
   using namespace std;
   int main(int argc, char **argv)
   {
 
     ros::init(argc, argv, "numbers");
     ros::NodeHandle n;
     ros::Publisher num_pub = n.advertise<std_msgs::Int32MultiArray>("number", 1000);
     ros::Rate loop_rate(10);
     int count = 0;
     while (ros::ok())
     {

       std_msgs::Int32MultiArray arr; // first member stores angular velocity and second linear velocit
   
       arr.data.clear();

       for(int i=0;i<2;++i)
       	 {
       	 	arr.data.push_back( rand() % 10 + 1);
       	 }
       //cout<<arr.data[0];
       ROS_INFO("Random Numbers Received");
         
 
     num_pub.publish(arr);
  
      ros::spinOnce();
  
      loop_rate.sleep();
      

     }
  
  
    return 0;
  }