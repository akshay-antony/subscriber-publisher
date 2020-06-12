   //num_pub publishes to the topic number by meassages of type Int32MultiArray
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
     ros::Publisher num_pub = n.advertise<std_msgs::Int32MultiArray>("number", 100);
     ros::Rate loop_rate(1);
     int count = 0;
     while (ros::ok())
     {

       std_msgs::Int32MultiArray arr; 
       arr.data.clear();

       for(int i=0;i<2;++i)
       	 {
       	 	arr.data.push_back( rand() % 10 + 1);
       	 }
       ROS_INFO_STREAM("Random Numbers Published : "<< arr.data[0] <<" "<<arr.data[1] );
      
     num_pub.publish(arr);
  
      ros::spinOnce();
  
      loop_rate.sleep();
      

     }
  
  
    return 0;
  }
