#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int getSum(std::vector<int> Numbers)
{
    return std::accumulate(Numbers.begin(), Numbers.end(), 0);
}

float getAverage(std::vector<int> Numbers) {
    return (std::accumulate(Numbers.begin(), Numbers.end(), 0) * 1.0) / Numbers.size();
}

int getMin(std::vector<int> Numbers) {
    return *std::min_element(Numbers.begin(), Numbers.end());
}

int main() {
    std::vector<int> Numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(Numbers) <<std::endl;
    std::cout << "Avg: " << getAverage(Numbers) <<std::endl;
    std::cout << "Min: " << getMin(Numbers) <<std::endl;
}