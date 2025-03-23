#include "header_task3.h"

int32_t main()
{
    const int32_t MAX_SIZE = 100;
    char arr_char[MAX_SIZE];
    int32_t arr_int[MAX_SIZE], size{}, choice{};
    double arr_double[MAX_SIZE];
    EnterSize(size);
    EnterChoice(choice);
    switch (choice)
    {
    case 0:
        EnterTheArray(arr_char, size);
        OutputTheArray(arr_char, size);
        std::cout << CountElements(arr_char, size);
        break;
    case 1:
        EnterTheArray(arr_int, size);
        OutputTheArray(arr_int, size);
        std::cout << CountElements(arr_int, size);
        break;
    case 2:
        EnterTheArray(arr_double, size);
        OutputTheArray(arr_double, size);
        std::cout << CountElements(arr_double, size);
        break;
    }
}