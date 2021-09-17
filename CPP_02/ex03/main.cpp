#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a(0.5, 2.5);
	Point b(2.5, 4.0);
	Point c(4, 2.5);
	Point point(4.5, 2);
	bsp(a, b, c, point);
}
