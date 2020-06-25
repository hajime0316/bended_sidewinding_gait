#include <ros/ros.h>
#include "half_pipe_sidewinding_gait.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "half_pipe_sidewinding_gait_node");
  HalfPipeSidewindingGait half_pipe_sidewinding_gait_instance;
  ros::spin();
  return 0;
}
