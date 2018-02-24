#include <iostream>

int main() {
	// how many bytes there are for every data type
    std::cout << "Data types sizes:\n";
    std::cout << "Int: " << sizeof(int) << std::endl;
    std::cout << "Short: " << sizeof(short) << std::endl;
    std::cout << "Long: " << sizeof(long) << std::endl;
    std::cout << "Long Long: " << sizeof(long long) << std::endl;
    std::cout << "Float: " << sizeof(float) << std::endl;
    std::cout << "Double: " << sizeof(double) << std::endl;
    std::cout << "Long Double: " << sizeof(long double) << std::endl;
	
	// comparing normal limits with machine limits
    std::cout << "\nMaximum values (expected / real):\n";
    int integer = 2147483647;
    std::cout << "Int: 2147483647 / " << integer << std::endl;
    unsigned int unsignedInt = 4294967285;
    std::cout << "Unsigned Int: 4294967285 / " << unsignedInt << std::endl;
	
    short shortInt = 32767;
    std::cout << "Short: 32767 / " << shortInt << std::endl;
    unsigned short unsignedShortInt = 65535;
    std::cout << "Unsigned Short: 65535 / " << unsignedShortInt << std::endl;
	
    long long longLong = 9223372036854775807;
    std::cout << "Long Long: 9223372036854775807 / " << longLong << std::endl;
    unsigned long long unsignedLongLong = 18446744073709551615;
    std::cout << "Unsigned Long Long: 18446744073709551615 / " << unsignedLongLong << std::endl;
	
    std::cout << "\nFloating point number types limits (expected / real):\n";
    std::cout << "Float:\n";
    float floatingPoint = 1.175494e-38;
    std::cout << "-Min: 1.175494e-38 (2^-126) / " << floatingPoint << std::endl;
    floatingPoint = 3.402823e+38;
    std::cout << "-Max: 3.402823e+38 (2^128) / " << floatingPoint << std::endl;
    floatingPoint = 1.192093e-07;
    std::cout << "-Error: 1.192093e-07 (2^-23) / " << floatingPoint << std::endl;
	
    std::cout << "Double:\n";
    double doublePrecision = 2.225074e-308;
    std::cout << "-Min: 2.225074e-308 (2^-1022) / " << doublePrecision << std::endl;
    doublePrecision = 1.797693e+308;
    std::cout << "-Max: 1.797693e+308 (2^1024) / " << doublePrecision << std::endl;
    doublePrecision = 2.220446e-16;
    std::cout << "-Error: 2.220446e-16 (2^-52) / " << doublePrecision << std::endl;
	
	// keep the console open
	std::cin.clear();
	std::cin.sync();
	std::cin.get();
    return 0;
}