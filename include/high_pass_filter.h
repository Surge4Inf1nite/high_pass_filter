#ifndef HIGH_PASS_FILTER_H
#define HIGH_PASS_FILTER_H

class HighPassFilter {
public:
    // 构造函数，传入滤波器系数 alpha
    HighPassFilter(double alpha);

    // 滤波函数，输入原始数据，返回滤波后的数据
    double filter(double input);

private:
    double alpha_;    // 滤波器系数
    double prev_input_;  // 上一次的输入值
    double prev_output_; // 上一次的输出值
};

#endif // HIGH_PASS_FILTER_H
