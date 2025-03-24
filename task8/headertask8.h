#include <iostream>

template <typename T>
void ReversArray(T* arr, int32_t size)
{
    for (int16_t i{}; i < size / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
