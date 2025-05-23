#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main() {
	int32_t size{};
	std::cout << "Input number of strings\n";
	std::cin >> size;
	int* numbers = new int[size];
	char** strings = new char* [size];
    std::cin.ignore();
    for (size_t i{}; i < size; ++i) {
			strings[i] = new char[100];
			std::cin.getline(strings[i], 100);
	}
    int min{ 0 }, max{ 0 }, summ{};
    for (size_t i{}; i < size; ++i) {
        size_t len{ std::strlen(strings[i]) };
        int num{};
        bool is_number = false;
        for (size_t j{}; j <= len; ++j) {
            if (std::isdigit(strings[i][j])) {
                num = num * 10 + (strings[i][j] - '0');
                is_number = true;
            }
            else {
                if (is_number) {
                    summ += num;
                    if (num > max)
                        max = num;
                    if (num < min)
                        min = num;
                    num = 0;
                    is_number = false;
                }
            }
        }
    }
    std::cout << "maximal number: " << max << " minimal number: " << min << " summ: " << summ << '\n';

    for (size_t i{}; i < size; ++i) {
        delete[] strings[i];
    }
    delete[] strings;
}