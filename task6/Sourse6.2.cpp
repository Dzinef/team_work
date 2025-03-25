#include "headertask6.h"


void EnterSize(int32_t& size)
{
    std::cout << "Enter size of array (not exceeding 100):\n";
    std::cin >> size;
    if (size > 100)
    {
        size = 100;
    }
}

void EnterChoice(int32_t& choice)
{
    std::cout << "Enter choice number(0 or 1 or 2), what type of array do you want?:\n 0) Char;\n 1) Integer;\n 2) Double;\n";
    std::cin >> choice;
}

bool isPrime(int32_t num)
{
    if (num <= 1) return false;

    for (int16_t i{ 2 }; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
