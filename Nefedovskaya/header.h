#ifndef HEADER_H
#define HEADER_H

#include <iostream>


void EnterSize(int32_t&);
void EnterChoice(int32_t&);

template <typename T>
void EnterTheArray(T* arr, int32_t size)
{
    std::cout << "Enter the array elements\n";
    for (int32_t i{}; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "\n";
}

template <typename T>
void OutputTheArray(T* arr, int32_t size)
{
    std::cout << "Array elements:\n";
    for (int32_t i{}; i < size; i++)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
}


#endif