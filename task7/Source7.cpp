#include "headertask7.h"


int32_t main()
{
    const int32_t MAX_SIZE = 100;
    char arr_char[MAX_SIZE];
    int32_t arr_int[MAX_SIZE], size{}, choice{};
    double arr_double[MAX_SIZE];
    int32_t minIndex{};
    int32_t maxIndex{};
    EnterSize(size);
    EnterChoice(choice);
    switch (choice)
    {
    case 0:
        EnterTheArray(arr_char, size);
        OutputTheArray(arr_char, size);
        std::cout << CountElements(arr_char, size);
        BubbleSort(arr_char, size);
        std::cout << "Sort array: ";
        for (int16_t i{ 0 }; i < size; ++i)
        {
            std::cout << arr_char[i] << " ";
        }
        std::cout << "\n";
        break;
    case 1:
        EnterTheArray(arr_int, size);
        OutputTheArray(arr_int, size);
        std::cout << CountElements(arr_int, size);
        std::cout << MaxElement(arr_int, size, maxIndex);
        std::cout << MinElement(arr_int, size, minIndex);
        std::cout << CalculatAverage(arr_int, size, minIndex, maxIndex);
        std::cout << sumPrimes(arr_int, size);
        BubbleSort(arr_int, size);
        std::cout << "Sort array: ";
        for (int16_t i{ 0 }; i < size; ++i)
        {
            std::cout << arr_int[i] << " ";
        }
        std::cout << "\n";
        break;
    case 2:
        EnterTheArray(arr_double, size);
        OutputTheArray(arr_double, size);
        std::cout << CountElements(arr_double, size);
        std::cout << MaxElement(arr_double, size, maxIndex);
        std::cout << MinElement(arr_double, size, minIndex);
        std::cout << CalculatAverage(arr_double, size, minIndex, maxIndex);
        BubbleSort(arr_double, size);
        std::cout << "Sort array: ";
        for (int16_t i{ 0 }; i < size; ++i)
        {
            std::cout << arr_double[i] << " ";
        }
        std::cout << "\n";
        break;
    }
}
