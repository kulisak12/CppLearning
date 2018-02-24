#include <iostream>

// function overload with different parameter data values
void getType(short a) {
    std::cout << a << " is of type short.";
}
void getType(int a) {
    std::cout << a << " is of type int.";
}
void getType(long a) {
    std::cout << a << " is of type long.";
}

// function overload with different number of parameters
void shapeData(int a, int b) {
    std::cout << "The area of the rectangle is " << a * b << std::endl;
}
void shapeData(int a, int b, int c) {
    std::cout << "The volume of the cuboid is " << a * b * c << std::endl;
}

int main() {
    // calculate the area or the volume
    shapeData(4, 7);
    shapeData (3, 5, 8);

    // get the variable data type
    short num = 128;
    getType(num);

    // keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}