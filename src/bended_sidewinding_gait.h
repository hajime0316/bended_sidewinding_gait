/**
 * @file    bended_sidewinding_gait.h
 * @brief   曲面に沿うサイドワインディングを生成するクラスのメソッド定義
 * @author  Hajime
 * @date    2020年6月25日
 * @detail
 */

#ifndef BENDED_SIDEWINDING_GAIT_H
#define BENDED_SIDEWINDING_GAIT_H

#include <snake_gait/snake_gait.h>

class BendedSidewindingGait : public SnakeGait {
 private:

  void ChangeParam(const joy_handler::JoySelectedData &);
  std::vector<double> CalcJointAngle();

 public:
  BendedSidewindingGait();
  ~BendedSidewindingGait();
};

#endif // bended_SIDEWINDING_GAIT_H_
