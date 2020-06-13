# subscriber-publisher
 A ROS package for subscribing and publishing to a topic via messages of type Int32MultiArray.
        Steps for running the pacakge

mkdir -p ~/catkin_ws/src

cd ~/catkin_ws/

catkin_make

source devel/setup.bash

cd src/

git clone https://github.com/akshay-antony/subscriber-publisher.git

cd ..

catkin_make

Running the launch file // source the setup.bash if not working properly

$ roslaunch subscriber_publisher sub_pub.launch 

For running individual nodes // source the setup.bash if not working properly

$ rosrun subscriber_publisher publisher

$ rosrun subscriber_publisher subscriber

$rosrun 
