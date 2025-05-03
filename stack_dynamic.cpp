#include <iostream>
int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;
    int arr[n]; // Variable Length Array (VLA) - stack dynamic
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    return 0;
}
