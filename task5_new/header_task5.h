#pragma once
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
template<typename T>
int32_t CountElements(T* arr, int32_t size)
{
    int32_t firstNull{ 0 };
    int32_t secondNull{ 0 };
    bool firstNullFound{ false };
    bool secondNullFound{ false };
    for (int32_t i = 0; i < size; i++)
    {
        if (arr[i] == 0 || arr[i] == '0')
        {
            firstNull = i;
            firstNullFound = true;
            std::cout << "First null is find!\n";
            break;
        }
    }
    for (int32_t i = size - 1; i != 0; i--)
    {
        if (arr[i] == 0 || arr[i] == '0')
        {
            secondNull = i;
            secondNullFound = true;
            std::cout << "Second null is find!\n";
            break;
        }
    }
    if (firstNullFound == true && secondNullFound == true)
    {
        std::cout << "Number of elements:";
        return secondNull - firstNull - 1;
    }
    else
    {
        std::cout << "Not enough nulls!\n";
        return 0;
    }
}
template<typename T>
T MaxElement(T* arr, int32_t size, int32_t& maxIndex)
{
    T maxElement{ arr[0] };
    for (int32_t i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    std::cout << "Your max element: " << maxElement << " (at index " << maxIndex << ")" << std::endl;
    return maxElement;
}

template <typename T>
T MinElement(T* arr, int32_t size, int32_t& minIndex)
{
    T minElement{ arr[0] };
    for (int32_t i = 1; i < size; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i]; 
            minIndex = i;
        }
    }
    std::cout << "Your minimal element: " << minElement << " (at index " << minIndex << ")" << std::endl;
    return minElement;
}
template<typename T>
double CalculatAverage(T* arr, int32_t size, int32_t& minIndex, int32_t& maxIndex)
{
    double average{};
    int16_t count{};
    int32_t sumOfElements{};
    if (minIndex > maxIndex)
    {
        int32_t temp{ maxIndex };
        maxIndex = minIndex;
        minIndex = temp;
    }
    for (int32_t i = minIndex + 1; i < maxIndex; ++i)
    {
        sumOfElements += arr[i];
        count++;
    }
    if (count > 0)
    {
        average = static_cast<double>(sumOfElements) / count;
    }
    else
    {
        std::cout << "Not enough elements." << std::endl;
    }
    std::cout << "Average:";
    return average;

}


#endif
