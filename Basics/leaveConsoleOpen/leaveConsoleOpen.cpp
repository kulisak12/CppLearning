#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello\n";
	int x;
	std::cin >> x; // reads a value using cin
	std::cin.ignore(32767, '\n'); // removes newline character from buffer
	std::cout << "Input" << x << std::endl;

	// keep the console open
	std::cout << "Press enter to exit...";
	std::cin.get();
	return 0;
}