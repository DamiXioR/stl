#pragma once
#include <vector>

class ArithmeticAverage {
public:
    ArithmeticAverage();
    int operator()(std::vector<int>& a, std::vector<int>& b) const;
};