#include "stdafx.h"
#include <iostream>

int main() {
	int x[5]; // declare an array of 5 int values

	// fill the array with user input
	std::cout << "Put in 5 numbers\n";
	for (int i = 0; i < 5; i++) {
		std::cin >> x[i];
	}
	std::cin.ignore(32767, '\n');

	for (int i = 4; i >= 0; i--) {
		std::cout << x[i] << ", ";
	}

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}