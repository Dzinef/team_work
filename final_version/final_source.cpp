#include "final_header.h"


void EnterSize(int32_t& size)
{
    std::cout << "Enter size of array (not exceeding 100):\n";
    std::cin >> size;
}

void EnterChoice(int32_t& choice)
{
    std::cout << "Enter choice number(0 or 1 or 2), what type of array do you want?:\n 0) Char;\n 1) Integer;\n 2) Double;\n";
    std::cin >> choice;
}

bool CheckSize(int32_t& size) {
    if (size > 0 && size < 101) {
        return true;
    }
    return false;
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