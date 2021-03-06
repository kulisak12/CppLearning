#include "stdafx.h"
#include <iostream>

bool returnTrue() {
	std::cout << "Returning true!" << std::endl;
	return 1;
}

int main() {
	// short circuiting
	if (0 > 1 && returnTrue()) { // the line "Returning true!" doesn't get printed
		std::cout << "Condition true" << std::endl;
	}
	else {
		std::cout << "Condition false" << std::endl;
	}

	// get input from user
	float height, weight;
	std::cout << "How tall are you?\n";
	std::cin >> height;
	std::cout << "How much do you weigh?\n";
	std::cin >> weight;
	std::cin.ignore(32767, '\n');

	// calculate BMI from input
	height /= 100;
	height *= height;
	int BMI = static_cast<int>(weight / height);

	// print output based on BMI
	switch (BMI) {
	case 18:
		std::cout << "You're too slim!\n";
		break;
	case 19:
		std::cout << "You're quite slim.\n";
		break;
	case 20:
		std::cout << "Your weight is perfect! Gratz!\n";
		break;
	case 21:
		std::cout << "You're a bit too fat.\n";
		break;
	case 22:
		std::cout << "You're fat like a rat.\n";
		break;
	default: // BMI is not in range from 18 to 22
		std::cout << "Something's not quite right. Let me look into it.\n";
	}

	if (BMI < 18 || BMI > 22) {
		std::cout << "Your BMI is " << BMI << ".\n";
		if (BMI < 18) {
			std::cout << "You are dangerously slim.\n";
		}
		else {
			std::cout << "You are dangerously fat.\n";
		}
	}

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}