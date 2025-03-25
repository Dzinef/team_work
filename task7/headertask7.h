#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include <algorithm>

void EnterSize(int32_t&);
void EnterChoice(int32_t&);
bool isPrime(int32_t);

template <typename T>
void BubbleSort(T* arr, int32_t size)
{
    for (int16_t i{ 0 }; i < size - 1; ++i)
    {
        for (int16_t j{ 0 }; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}


#endif
