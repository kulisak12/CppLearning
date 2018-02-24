#include <iostream>
#include "externalFunctionDefinitions.cpp"

// a variable accessible in all files
int globalVariable = 10;

// function definition
// set default values for parameters, allow addition of less than 4 numbers
int addMore(int a = 0, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
	// declare the functions defined in a separate file
	void getGlobalVariable();
    float multiply(float a, float b);
	long arrayMultiply(int arr[], int length);
	int sumOfSquares(int n);
	
	// call a function defined in a separate file
	getGlobalVariable();
	
	// function to calculate the product of two numbers
    float x, y;
	std::cout << "Put in two numbers to be multiplied:\n";
    std::cin >> x >> y;
    std::cout << multiply(x, y) << "\n\n";

    // function to add any number of operands up to 4
    std::cout << "No numbers to add: " << addMore() << std::endl;
    std::cout << "4: " << addMore(4) << std::endl;
    std::cout << "4 + 9: " << addMore(4, 9) << std::endl;
    std::cout << "4 + 9 + 16: " << addMore(4, 9, 16) << std::endl;
    std::cout << "4 + 9 + 16 + 25: " << addMore(4, 9, 16, 25) << "\n\n";

    // function to get the sum of squares of all integers up to a number
    int sumOfSquares(int a);
    std::cout << "Put in a number\n";
    std::cin >> x;
    std::cout << sumOfSquares(x);

    // function to multiply values in an array
    long arrayMultiply(int arr[], int length);
    int numerators[] = {3, 5, 23, 7, 43};
    int length = sizeof(numerators) / sizeof(numerators[0]);
    std::cout << "\n\nThe product is " << arrayMultiply(numerators, length);
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}