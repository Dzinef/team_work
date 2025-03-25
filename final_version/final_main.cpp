#include "Final_header.h"

int32_t main()
{
    const int32_t MAX_SIZE = 100;
    char arr_char[MAX_SIZE], element_char{};
    int32_t arr_int[MAX_SIZE], size{}, choice{}, maxIndex{}, minIndex{}, element_int{};
    double arr_double[MAX_SIZE], element_double{};

    EnterSize(size);
    if (!CheckSize(size)) {
        return 0;
    }
    EnterChoice(choice);

    switch (choice)
    {
    case 0:
        EnterTheArray(arr_char, size);
        PrintArray(arr_char, size);
        EnterTheElement(element_char);
        std::cout << "Position of element " << FindElement(arr_char, size, element_char) << "\n";
        std::cout << CountElements(arr_char, size) << "\n";
        BubbleSort(arr_char, size);
        PrintArray(arr_char, size);
        ReversArray(arr_char, size);
        break;
    case 1:
        EnterTheArray(arr_int, size);
        PrintArray(arr_int, size);
        EnterTheElement(element_int);
        std::cout << "Position of element " << FindElement(arr_int, size, element_int) << "\n";
        std::cout << CountElements(arr_int, size) << "\n";
        std::cout << MaxElement(arr_int, size, maxIndex) << "\n";
        std::cout << MinElement(arr_int, size, minIndex) << "\n";
        std::cout << CalculatAverage(arr_int, size, minIndex, maxIndex) << "\n";
        std::cout << "Summ of simple: " << sumPrimes(arr_int, size) << "\n";
        BubbleSort(arr_int, size);
        PrintArray(arr_int, size);
        ReversArray(arr_int, size);
        ReplaceNegatives(arr_int, size);
        break;
    case 2:
        EnterTheArray(arr_double, size);
        PrintArray(arr_double, size);
        EnterTheElement(element_double);
        std::cout << "Position of element " << FindElement(arr_double, size, element_double) << "\n";
        std::cout << CountElements(arr_double, size) << "\n";
        std::cout << MaxElement(arr_double, size, maxIndex) << "\n";
        std::cout << MinElement(arr_double, size, minIndex) << "\n";
        ReversArray(arr_double, size);
        ReplaceNegatives(arr_double, size);
        break;
    default:
        std::cout << "Incorrect number" << std::endl;
    }
}