#include <iostream>

int main() {
	 // create a pointer to the address of x
    short x = 5;
    short* px = &x;
	
	// print variable and it's pointer
    std::cout << x << std::endl;
    std::cout << px << std::endl;
    std::cout << *px << "\n---\n";
	
    *px = 12;
    std::cout << x << std::endl;
    std::cout << px << std::endl;
    std::cout << *px << "\n------\n";
	
	// allocate memory on the heap
    double* pd = NULL;
    pd = new double;
	
    std::cout << pd << std::endl;
    std::cout << *pd << "\n---\n";
	
    *pd = 3.1416;
    std::cout << pd << std::endl;
    std::cout << *pd << "\n---\n";
	
    // deallocate memory, point the hanging pointer to NULL
    delete pd;
    pd = NULL;
	
    std::cout << pd << "\n---\n";
    // std::cout << *pd << "\n---\n"; - crashes the program
	
	
    // pointing to an array
    pd = new double[4]; // the array needs to be of type double

    for (int i = 0; i < 4; i++) {
        // array is a pointer as well, doesn't use *
        pd[i] = 10*(4-i);
    }
    std::cout << pd[1] << std::endl;

    delete[] pd; // Different syntax for deallocating an array
    pd = NULL;
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}