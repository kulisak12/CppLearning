// Trying to make use of OOP in the task to create an array class
#include "stdafx.h"
#include <iostream>

class altArray {
private:
	int size;
	int* arr = NULL;
public:
	altArray(int size) {
		arr = new int[size];
		this->size = size;
	}
	~altArray() {
		delete[] arr;
		arr = NULL;
	}
	int length() {
		return this->size;
	}
	int* at(size_t pos) {
		return arr + pos;
	}
};

int main() {
	altArray myArray(5);
	*(myArray.at(0)) = 13;
	std::cin.get();
	return 0;
}