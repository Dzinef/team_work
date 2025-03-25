#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>

void EnterSize(int32_t&);
void EnterChoice(int32_t&);
bool isPrime(int32_t);


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

#endif
