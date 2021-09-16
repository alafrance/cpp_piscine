#include <iostream>
#include "Fixed.hpp"

int main(void){
	Fixed		a;
	Fixed		const	b(Fixed(5.05f) * Fixed(2));

	std::cout << " No increment : " <<  a << std::endl;
	std::cout << " Pre increment : " <<  ++a << std::endl;
	std::cout << " No increment : " <<  a << std::endl;
	std::cout << " Post increment : " <<  a++ << std::endl;
	std::cout << " No increment : " <<  a << std::endl;
	std::cout << " Pre decrement : " <<  --a << std::endl;
	std::cout << " No increment : " <<  a << std::endl;
	std::cout << " Post decrement : " <<  a-- << std::endl;
	std::cout << " No increment : " <<  a << std::endl;
	std::cout << " No increment : " <<  b << std::endl;

	a = b;
	a = a - 2;
	if (a > b) {
		std::cout << "a is upper to b" << std::endl;
	}
	if (a < b) {
		std::cout << "a is lower to b" << std::endl;
	}
	a = a + 2;
	if (a <= b) {
		std::cout << "a is lower or equal to b" << std::endl;
	}
	if (a >= b) {
		std::cout << "a is upper or equal to b" << std::endl;
	}
	if (a == b) {
		std::cout << "a is equal to b" << std::endl;
	}
	if (a != b) {
		std::cout << "a is not equal to b" << std::endl;
	}
}