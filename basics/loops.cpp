#include <iostream>

int main() {
    int a1 = 0;
    int a2 = 1;
	
	// continue printing the Fibonacci sequence all the way to 1000
    std::cout << "Fibonacci sequence:\n";
    while (a2 < 1000) {
        a2 += a1;
        a1 = a2 - a1;
        std::cout << a1 << std::endl;
    }
	
    std::cout << "Put in two numbers\n";
    std::cin >> a1 >> a2;
    std::cout << "a_n = a_(n-2) + a_(n-1); a_1 = " << a1 << ", a_2 = " << a2 << std::endl;
	std::cout << a1 << std::endl;
    // generate 20 terms of a sequence where a number is the sum of two previous ones
    for (int i = 0; i < 20; i++) {
        a2 += a1;
        a1 = a2 - a1;
        std::cout << a1 << std::endl;
        if (a1 == 89) {
            std::cout << "Stopping!";
            break; // if the number hits 89, stop writing out the sequence
        }
    }

    // keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}
