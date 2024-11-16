#include <iostream>
#include <vector>
#include "high_pass_filter.h"

int main() {
    // 示例输入数据
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    double alpha = 0.9;  // 滤波器系数，越接近 1 高通效果越强

    // 创建高通滤波器实例
    HighPassFilter hpf(alpha);

    // 对数据进行滤波
    std::vector<double> filtered_data;
    for (double value : data) {
        double filtered_value = hpf.filter(value);
        filtered_data.push_back(filtered_value);
    }

    // 输出滤波后的数据
    std::cout << "High Pass Filtered Data: ";
    for (double value : filtered_data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
