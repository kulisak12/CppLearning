#include <iostream>

int main() {
    int x,y,z;
	
	// get input from user
    std::cout << "Put in three numbers\n";
    std::cin >> x >> y >> z;
	
	// print results of different operations
    std::cout << x << "+" << y << "=" << (x+y) << std::endl;
    std::cout << x << "-" << y << "=" << (x-y) << std::endl;
    std::cout << --x << "+1=" << ++x << std::endl;
    std::cout << x << "*" << y << "=" << (x*y) << std::endl;

	// check if division is possible
    if (y == 0) {
        std::cout << "Cannot divide by 0\n";
    }
    else {
        std::cout << y << "/" << z << "=" << (y/z) << std::endl;
        std::cout << y << "%" << z << "=" << (y%z) << std::endl;
    }
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}