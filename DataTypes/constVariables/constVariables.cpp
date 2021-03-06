#include "stdafx.h"
#include "constants.h"
#include <iostream>

template<class T>
T square(T x) {
	return x * x;
}

int main() {
	// mathematical constants
	double radius = 16;
	std::cout << "The circumference of the circle is " <<
		2 * constants::pi * radius << ".\n";

	double initialVelocity = 7.5;
	double airTime = 0.9;
	std::cout << "The ball will be " <<
		initialVelocity * airTime - constants::gravity * square(airTime) / 2 <<
		" meters above the ground.\n";

	// values which do not change
	std::cout << "The player can carry a maximum of " <<
		itemsInStack * inventorySlotCount << " items.\n";

	// leave the console open
	std::cout << "\nPress enter to continue...\n";
	std::cin.get();
	return 0;
}