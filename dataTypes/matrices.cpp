#include <iostream>

int main() {
    int aRows, aRows_bCollumns, bCollumns, sum;
	
    // ask user to fill in the first matrix
    std::cout << "-First matrix\nRows?";
    std::cin >> aRows;
    std::cout << "Columns?";
    std::cin >> aRows_bCollumns;
	
	// create a two-dimensional array representing the matrix
    int matrixA[aRows][aRows_bCollumns];
    for (int a = 0; a < aRows; a++) { // for each row
        std::cout << "Enter the column " << a << " of the first matrix\n";
        for (int b = 0; b < aRows_bCollumns; b++) { // for each column in given row
            std::cin >> matrixA[a][b];
        }
    }
	
    // ask user to fill in the second matrix
    std::cout << "-Second matrix\nColumns?";
    std::cin >> bCollumns;
    /* The number of rows of the second matrix is the same as the number of
    columns in the first matrix; aCollums == bRows == aRows_bCollumns */
	
    int matrixB[aRows_bCollumns][bCollumns];
    for (int a = 0; a < aRows_bCollumns; a++) { // for each row
        std::cout << "Enter the column " << a << " of the second matrix\n";
        for (int b = 0; b < bCollumns; b++) { // for each column in given row
            std::cin >> matrixB[a][b];
        }
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
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}