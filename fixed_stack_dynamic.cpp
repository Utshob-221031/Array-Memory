#include <iostream>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Fixed size, allocated on stack
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
