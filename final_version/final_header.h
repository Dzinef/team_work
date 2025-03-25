#ifndef FINAL_HEADER_H
#define FINAL_HEADER_H

#include <iostream>


void EnterSize(int32_t&);
bool CheckSize(int32_t&);
void EnterChoice(int32_t&);
bool isPrime(int32_t);

template <typename T>
void EnterTheArray(T* arr, int32_t size)
{
    std::cout << "Enter the array elements\n";
    for (int32_t i{}; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    std::cout << "\n";

}

template <typename T>
void PrintArray(T* arr, int32_t size)
{
    std::cout << "Array elements:\n";
    for (int32_t i{}; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

template<class T>
void EnterTheElement(T& element)
{
    std::cout << "Enter the element\n";
    std::cin >> element;
}

template <class T>
int32_t FindElement(T* arr, int32_t size, T& element)
{
    T temp{ -1 };
    for (int16_t i{}; i < size; ++i) {
        if (arr[i] == element) {
            temp = i;
        }
    }
    return temp;
}

template<typename T>
int32_t CountElements(T* arr, int32_t size)
{
    int32_t firstNull{ 0 };
    int32_t secondNull{ 0 };
    bool firstNullFound{ false };
    bool secondNullFound{ false };
    for (int32_t i = 0; i < size; ++i)
    {
        if (arr[i] == 0 || arr[i] == '0')
        {
            firstNull = i;
            firstNullFound = true;
            std::cout << "First null is find!\n";
            break;
        }
    }
    for (int32_t i = size - 1; i != 0; --i)
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
        std::cout << "Number of elements: ";
        return secondNull - firstNull - 1;
    }
    else
    {
        std::cout << "Not enough nulls!\n";
        return -1;
    }
}

template<typename T>
T MaxElement(T* arr, int32_t size, int32_t& maxIndex)
{
    T maxElement{ arr[0] };
    for (int32_t i = 1; i < size; ++i)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    std::cout << "Your max element index:" << std::endl;
    return maxIndex;
}

template <typename T>
T MinElement(T* arr, int32_t size, int32_t& minIndex)
{
    T minElement{ arr[0] };
    for (int32_t i = 1; i < size; ++i)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
            minIndex = i;
        }
    }
    std::cout << "Your minimal element index:" << std::endl;
    return minIndex;
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
        ++count;
    }
    if (count > 0)
    {
        average = static_cast<double>(sumOfElements) / count;
    }
    else
    {
        std::cout << "Not enough elements." << std::endl;
    }
    std::cout << "Average: ";
    return average;

}

template <typename T>
int32_t sumPrimes(T* arr, int32_t size)
{
    int32_t sum{ 0 };
    int32_t num{ 0 };

    for (int32_t i{ 0 }; i < size; ++i)
    {
        num = arr[i];

        if (num == 2 || num == 3)
        {
            sum += num;
        }
        else
        {
            if (isPrime(num))
            {
                sum += num;
            }
        }
    }
    return sum;
}

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

template <typename T>
void ReversArray(T* arr, int32_t size)
{
    for (int16_t i{}; i < size / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    PrintArray(arr, size);
}

template <typename T>
void ReplaceNegatives(T* arr, int32_t size)
{
    for (int16_t i{}; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    for (int16_t i{}; i < size; ++i)
    {
        if (arr[i] == 0)
        {
            for (int16_t j{ i + 1 }; j < size; ++j) {
                if (arr[j] != 0)
                {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }
    PrintArray(arr, size);
}


#endif
