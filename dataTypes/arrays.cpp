#include <iostream>

int main() {
    int x[5]; // declare an array of 5 int values
	
	// fill the array with user input
    std::cout << "Put in 5 numbers\n";
    for (int i = 0; i < 5; i++) {
		std::cin >> x[i];
    }
	
    for (int i = 4; i >= 0; i--) {
		std::cout << x[i] << ", ";
    }
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}