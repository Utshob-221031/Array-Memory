# Memory Structure Array Programs

This repo contains simple programs demonstrating array allocation in different memory structures.

## Categories
- **Fixed Stack Dynamic**: Size known at compile-time, stored on stack.
- **Stack Dynamic**: Size decided at run-time, allocated on stack.
- **Fixed Heap Dynamic**: Fixed size but allocated on heap memory.
- **Heap Dynamic**: Dynamically resizable, allocated on heap.

## Languages Used
- **C++**
- **Python**

## Comparison

| Category              | C++ Implementation             | Python Implementation              |
|-----------------------|--------------------------------|------------------------------------|
| Fixed Stack Dynamic   | `int arr[5];`                  | `arr = [1, 2, 3, 4, 5]`            |
| Stack Dynamic         | `int n; cin >> n; int arr[n];`| `n = int(input()); arr = [..]`    |
| Fixed Heap Dynamic    | `int* arr = new int[5];`       | `ctypes.c_int * 5`                |
| Heap Dynamic          | `std::vector<int>`             | Python `list.append()`            |

C++ gives explicit control over stack vs heap, while Python manages memory dynamically behind the scenes.
