#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <experimental\filesystem>
namespace fs = std::experimental::filesystem;

int main() {
	// operations
	fs::path exampleFile("C:\\C++\\Learning\\Files\\filesystem\\sample.txt");
	std::cout << exampleFile << std::endl;
	std::cout << "Exists: " << fs::exists(exampleFile) << std::endl;
	std::cout << "Is directory: " << fs::is_directory(exampleFile) << std::endl;
	std::cout << "Root name: " << exampleFile.root_name() << std::endl;
	std::cout << "Root path: " << exampleFile.root_path() << std::endl;
	std::cout << "Relative path: " << exampleFile.relative_path() << std::endl;
	std::cout << "Parent path: " << exampleFile.parent_path() << std::endl;
	std::cout << "Filename: " << exampleFile.filename() << std::endl;
	std::cout << "Stem: " << exampleFile.stem() << std::endl;
	std::cout << "Extension: " << exampleFile.extension() << std::endl;
	std::cout << "\n";

	// finding the contents of a folder
	fs::path currentFolder = fs::current_path();
	std::cout << currentFolder << std::endl;
	std::cout << "Contents:\n";
	for (auto const& entry : fs::directory_iterator(currentFolder)) {
		std::cout << entry << std::endl;
	}
	std::cout << "\n";

	// open and read any .in file
	try {
		for (auto const& entry : fs::directory_iterator(currentFolder)) {
			if (entry.path().extension() == ".in") {
				std::ifstream inputFile;
				inputFile.open(entry.path());
				std::string line;
				std::getline(inputFile, line);
				std::cout << line << std::endl;
				inputFile.close();
			}
		}
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}