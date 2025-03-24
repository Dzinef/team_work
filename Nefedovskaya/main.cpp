#include "header.h"

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
        PrintArray(arr_char, size);
        break;
    case 1:
        EnterTheArray(arr_int, size);
        PrintArray(arr_int, size);
        break;
    case 2:
        EnterTheArray(arr_double, size);
        PrintArray(arr_double, size);
        break;
    }
}

