#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	Point point(2.98, 2.78);
	Point a(0.5, 2.5);
	Point b(2.5, 4);
	Point c(4, 2.5);
	if (bsp(a, b, c, point))
		std::cout << "\e[0;32mThe point is inside the triangle\n";
	else
		std::cout << "\e[0;31mThe point is NOT inside the triangle\n";
	std::cout << "\e[0m";
	return (0);
}
