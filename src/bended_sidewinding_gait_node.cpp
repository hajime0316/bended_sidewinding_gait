#include <ros/ros.h>
#include "bended_sidewinding_gait.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "bended_sidewinding_gait_node");
  BendedSidewindingGait bended_sidewinding_gait_instance;
  ros::spin();
  return 0;
}
