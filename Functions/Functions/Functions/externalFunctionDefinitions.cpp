#include "stdafx.h"
#include <iostream>

// declare variable in this scope
extern int globalVariable;

void getGlobalVariable() {
	std::cout << "The global value is " << globalVariable << std::endl;
}

// function to get the product of two numbers
float multiply(float a, float b) {
    return a * b;
}

// passing an array
long arrayMultiply(int arr[], int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

// using recursion
int sumOfSquares(int n) {
    if (n == 1) { // the base case
        return 1;
    } else {
        return sumOfSquares(n - 1) + n*n; // recursion
    }
}