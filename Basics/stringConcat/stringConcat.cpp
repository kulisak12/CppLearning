#include "stdafx.h"
#include <iostream>
#include <string>

int main() {
	// concatenating strings to be printed
	std::cout << "Hello " << "world.\n";

	// appending one string to another
	std::string message = "Goodbye, ";
	message.append("cruel world.");
	std::cout << message << std::endl;

	// creating a concatenated string
	std::string part1 = "My name";
	std::string part2 = " is Bob";
	message = part1 + part2;
	std::cout << message << std::endl;

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}