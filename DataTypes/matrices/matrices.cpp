#include "stdafx.h"
#include <iostream>

int main() {
	int aRows, aRows_bCollumns, bCollumns, sum;

	// ask user to fill in the first matrix
	std::cout << "-First matrix\nRows?";
	std::cin >> aRows;
	std::cin.ignore(32767, '\n');
	std::cout << "Columns?";
	std::cin >> aRows_bCollumns;
	std::cin.ignore(32767, '\n');

	// create a two-dimensional array representing the matrix
	int** matrixA = new int*[aRows];
	for (int a = 0; a < aRows; a++) { // for each row
		matrixA[a] = new int[aRows_bCollumns];
		std::cout << "Enter the column " << a << " of the first matrix\n";
		for (int b = 0; b < aRows_bCollumns; b++) { // for each column in given row
			std::cin >> matrixA[a][b];
		}
		std::cin.ignore(32767, '\n');
	}

	// ask user to fill in the second matrix
	std::cout << "-Second matrix\nColumns?";
	std::cin >> bCollumns;
	std::cin.ignore(32767, '\n');
	/* The number of rows of the second matrix is the same as the number of
	columns in the first matrix; aCollums == bRows == aRows_bCollumns */

	int** matrixB = new int*[aRows_bCollumns];
	for (int a = 0; a < aRows_bCollumns; a++) { // for each row
		matrixB[a] = new int[bCollumns];
		std::cout << "Enter the column " << a << " of the second matrix\n";
		for (int b = 0; b < bCollumns; b++) { // for each column in given row
			std::cin >> matrixB[a][b];
		}
		std::cin.ignore(32767, '\n');
	}
	// multiply matrices
	std::cout << "Multiplying matrices, creating a " << aRows << " by " << bCollumns << " matrix.\n";
	for (int a = 0; a < aRows; a++) { // for each row
		std::cout << "[";
		for (int b = 0; b < bCollumns; b++) { // for each column in given row
											  // calculate field at [a][b]
			sum = 0;
			// for each pair of corresponding fields
			for (int i = 0; i < aRows_bCollumns; i++) {
				sum += matrixA[a][i] * matrixB[i][b];
			}

			std::cout << sum << " ";
		}
		std::cout << "]\n";
	}

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}