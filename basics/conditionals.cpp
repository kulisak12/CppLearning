#include <iostream>
#include <math.h> // needed for raising a number to a power

int main() {
    float height, weight;
	
	// get input from user
    std::cout << "How tall are you?\n";
    std::cin >> height;
    std::cout << "How much do you weigh?\n";
    std::cin >> weight;
	
	// calculate BMI from input
    int BMI = weight / pow((height / 100),2);
	
	// print output based on BMI
    switch (BMI) {
        case 18:
            std::cout << "You're too slim!\n";
            break;
        case 19:
            std::cout << "You're quite slim.\n";
            break;
        case 20:
            std::cout << "Your weight is perfect! Gratz!\n";
            break;
        case 21:
            std::cout << "You're a bit too fat.\n";
            break;
        case 22:
            std::cout << "You're fat like a rat.\n";
            break;
        default: // BMI is not in range from 18 to 22
            std::cout << "Something's not quite right. Let me look into it.\n";
    }

    if (BMI < 18 || BMI > 22) {
        std::cout << "Your BMI is " << BMI << ".\n";
        if (BMI < 18) {
            std::cout << "You are dangerously slim.\n";
        } else {
            std::cout << "You are dangerously fat.\n";
        }
    }
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}