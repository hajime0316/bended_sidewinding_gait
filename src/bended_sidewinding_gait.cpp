/**
 * @file    bended_sidewinding_gait.cpp
 * @brief   曲面に沿うサイドワインディングを生成するクラスのメソッド定義
 * @author  Hajime
 * @date    2020年6月25日
 * @detail
 */

#include "bended_sidewinding_gait.h"
#include <cmath>

using namespace joy_handler;

BendedSidewindingGait::BendedSidewindingGait() : SnakeGait("bended_sidewinding_gait")
{
}

BendedSidewindingGait::~BendedSidewindingGait()
{
}

void BendedSidewindingGait::ChangeParam(const JoySelectedData &joy_data)
{
}

std::vector<double> BendedSidewindingGait::CalcJointAngle()
{
  std::vector<double> target_joint_angles(spec_->num_joint(), 0.0);

  return target_joint_angles;
}
