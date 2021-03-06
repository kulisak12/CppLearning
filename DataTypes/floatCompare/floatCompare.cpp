#include "stdafx.h"
#include <cmath>
#include <iostream>

bool isEqual(double a, double b) {
	double diff = std::abs(a - b);
	if (diff < a / 0x40000) { // 2^20, difference less than ~0.001%
		return 1;
	}
	return 0;
}

int main() {
	double a = 1.3;
	double b = 13;
	
	for (int i = 0; i < 8; i++) {
		a *= a;
		b *= b;
	}
	b /= std::pow(10, 0x100); // 10^(2^8)

	std::cout.precision(16);
	std::cout << "a = " << a << "\nb = " << b << std::endl;
	std::cout << "Equality: " << (a == b) << std::endl;
	std::cout << "Float equality: " << isEqual(a, b) << std::endl;

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}

