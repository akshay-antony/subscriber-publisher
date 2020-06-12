# subscriber-publisher
 A ROS package for subscribing and publishing to a topic via messages of type Int32MultiArray
Steps for running the pacakge

mkdir -p ~/catkin_ws/src

cd ~/catkin_ws/

catkin_make

source devel/setup.bash

cd src/

git clone https://github.com/akshay-antony/subscriber-publisher.git

cd ..

catkin_make

