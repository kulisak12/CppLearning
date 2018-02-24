#include <iostream> // needed to get input and print stuff to console

int main() {
	// ask user for input, print it back
	std::cout << "Write a sentence please\n";
    std::string userInput;
    std::getline(std::cin, userInput);
    std::cout << "Input detected: " << userInput << std::endl;
	
	// get three different words and print them
	std::cout << "Put in three words\n";
    std::string a, b, c;
    std::cin >> a >> b >> c; // getting multiple inputs
    std::cout << a << " " << b << " " << c << std::endl;
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
}