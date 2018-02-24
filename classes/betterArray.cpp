// Trying to make use of OOP in the task to create an array class
#include <iostream>

class betterArray {
	private:
		int size;
		int* arr = NULL;
	public:
		betterArray(int size) {
			arr = new int[size];
			this->size = size;
		}
		~betterArray() {
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
	betterArray myArray(5);
	*(myArray.at(0)) = 13;
	std::cin.get();
	return 0;
}