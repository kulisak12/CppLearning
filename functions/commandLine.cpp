#include <stdio.h>

int stringToInt(char cstr[]) {
	int i = 0;
	int numericalValue = 0;
	while (cstr[i] != '\0') {
		numericalValue *= 10;
		numericalValue += ((int) cstr[i]) - 48;
		i++;
	}
	return numericalValue;
}

int main(int argc, char* argv[]) { // gets parameters from command line
	printf("First char of filename: %d\n", argv[0][0]);
	printf("Parameter: %s\n", argv[1]);
	printf("Numerical value of parameter: %i", stringToInt(argv[1]));
	
	return 0;
}