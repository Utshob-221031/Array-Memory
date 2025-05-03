# Simulating fixed heap allocation
import ctypes
arr = (ctypes.c_int * 5)(1, 2, 3, 4, 5)
for val in arr:
    print(val, end=' ')
