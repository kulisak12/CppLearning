#include <iostream>

// passing the argument as a value
void keep(int x) {
    while (x > 0) {
        std::cout << "Hello ";
        x--;
    }
}

// passing the argument as a reference
void change(int *p) {
    while (*p > 0) {
        std::cout << "world ";
        (*p)--; // *p-- causes a crash
    }
}

/* also possible:
void change(int &p) {
    while (p > 0) {
        std::cout << "world ";
        p--;
    }
}

change(x);
*/

int main() {
    int x = 5;
    keep(x); // pass by value, x doesn't change
    std::cout << "\nNow x is " << x << std::endl;

    change(&x); // pass by reference, x changes
    std::cout << "\nNow x is " << x << std::endl;
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}