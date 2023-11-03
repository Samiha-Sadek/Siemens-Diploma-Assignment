#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int getSum(std::vector<int> Numbers)
{
    return std::accumulate(Numbers.begin(), Numbers.end(), 0);
}
int main() {
    std::vector<int> Numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum" << getSum(Numbers) <<std::endl;
}