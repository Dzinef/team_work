#include <iostream>

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
	int32_t counter{};
	for (int16_t i{}; i < size; ++i) 
	{
		if (arr[i] == 0) 
		{
			int32_t temp_index{ size - 1 - counter };
			if (temp > i) 
			{
				T temp{ arr[i] };
				arr[i] = arr[temp_index];
				arr[temp_index] = temp;
			}
			++counter;
		}
	}
}