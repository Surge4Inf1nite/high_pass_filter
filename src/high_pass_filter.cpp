#include "high_pass_filter.h"

// 构造函数初始化
HighPassFilter::HighPassFilter(double alpha)
    : alpha_(alpha), prev_input_(0.0), prev_output_(0.0) {}

// 滤波函数实现
double HighPassFilter::filter(double input) {
    // 一阶高通滤波公式
    double output = alpha_ * (prev_output_ + input - prev_input_);
    prev_input_ = input;
    prev_output_ = output;
    return output;
}
