#include <iostream>
#include <stdlib.h> // needed for rand()
#include <time.h> // needed for getting system time
#include "getRandom.cpp"

int main() {
    // these numbers are random, but they repeat with every execution
    std::cout << "Not really random numbes between 0 and " << RAND_MAX << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << rand() << std::endl;
    }
	
	// set the seed for randomization
    std::cout << "\nNow, some actual random numbers\n";
    srand(time(NULL)*2);
    rand(); // the first number isn't random, skip it
    for (int i = 0; i < 5; i++) {
        std::cout << rand() << std::endl;
    }
	
	// random numbers function
    std::cout << "\nA random number from <0;1)\n";
    float rng(); // declare the function
    std::cout << getRandom() << std::endl;
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}
