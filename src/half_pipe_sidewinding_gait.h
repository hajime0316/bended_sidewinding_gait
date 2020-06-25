/**
 * @file    half_pipe_sidewinding_gait.h
 * @brief   ハーフパイプに沿うサイドワインディングを生成するクラスのメソッド定義
 * @author  Hajime
 * @date    2020年6月25日
 * @detail
 */

#ifndef HALF_PIPE_SIDEWINDING_GAIT_H
#define HALF_PIPE_SIDEWINDING_GAIT_H

#include <snake_gait/snake_gait.h>

class HalfPipeSidewindingGait : public SnakeGait {
 private:

  void ChangeParam(const joy_handler::JoySelectedData &);
  std::vector<double> CalcJointAngle();

 public:
  HalfPipeSidewindingGait();
  ~HalfPipeSidewindingGait();
};

#endif // HALF_PIPE_SIDEWINDING_GAIT_H_
