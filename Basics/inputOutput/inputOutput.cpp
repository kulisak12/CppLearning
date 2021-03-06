#include "stdafx.h"
#include <iostream> // needed to get input and print stuff to console
#include <string> // library adding text variables

int main() {
	// ask user for input, print it back
	std::cout << "Write a sentence please\n";
	std::string userInput;
	std::getline(std::cin, userInput);
	std::cout << "Input detected: " << userInput << std::endl;

	// get three different words and print them
	std::cout << "Put in three words\n";
	std::string a, b, c;
	std::cin >> a >> b >> c; // getting multiple inputs
	std::cin.ignore(32767, '\n'); // cin buffer might not be empty, clear it
	std::cout << a << " " << b << " " << c << std::endl;

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}