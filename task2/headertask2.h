#include <iostream>

template <class T>
int32_t FindElement(T* arr, int32_t size, int32_t element)
{
	for (int16_t i{}, i < size, ++i) {
		if (arr[i] == element) {
			return element;
		}
	}
	return -1;
}
