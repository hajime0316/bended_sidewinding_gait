/**
 * @file    half_pipe_sidewinding_gait.cpp
 * @brief   ハーフパイプに沿うサイドワインディングを生成するクラスのメソッド定義
 * @author  Hajime
 * @date    2020年6月25日
 * @detail
 */

#include "half_pipe_sidewinding_gait.h"
#include <cmath>

using namespace joy_handler;

HalfPipeSidewindingGait::HalfPipeSidewindingGait() : SnakeGait("half_pipe_sidewinding_gait")
{
}

HalfPipeSidewindingGait::~HalfPipeSidewindingGait()
{
}

void HalfPipeSidewindingGait::ChangeParam(const JoySelectedData &joy_data)
{
}

std::vector<double> HalfPipeSidewindingGait::CalcJointAngle()
{
  std::vector<double> target_joint_angles(spec_->num_joint(), 0.0);

  return target_joint_angles;
}
