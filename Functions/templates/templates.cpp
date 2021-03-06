#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

template<class T, class U>
auto at(T arr, U index) {
	return arr[index];
}

template<class T>
T find_max(T t) {
	return t;
}
template<class T, class... Ts>
T find_max(T t, Ts... ts) { // parameter pack
	T max = find_max(ts...); // rekurze
	return (t > max) ? t : max;
}

template<bool Condition, class Then, class Else>
struct if_ {
	using type = Else;
};
template<class Then, class Else>
struct if_<true, Then, Else> { // částečná specializace
	using type = Then;
};

int main() {
	std::vector<int> vec = {11, 12, 13};
	std::cout << at(vec, 1) << std::endl; // 12

	std::cout << find_max(10, 20, 12, 0) << std::endl; // 20
	std::cout << find_max(0.1, -8.3, 4.1, 3.0, -3.2) << std::endl; // volant

	std::cout << typeid(if_<true, double, int>::type).name() << std::endl; // vyhodí to první typ = double
	std::cout << typeid(if_<false, double, int>::type).name() << std::endl; // vyhodí to druhý typ = int

	std::cin.get();
	return 0;
}
