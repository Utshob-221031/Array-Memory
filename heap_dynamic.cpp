#include <iostream>
#include <vector>
int main() {
    std::vector<int> arr;
    for (int i = 1; i <= 5; i++) arr.push_back(i);
    for (int val : arr) std::cout << val << " ";
    return 0;
}
