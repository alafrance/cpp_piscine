#ifndef POINT
#define POINT
#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(Point const& src);
	Point(float const x, float const y);
	Point(Fixed x, Fixed y);
	~Point();
	Point& operator=(Point const& rhs);
	Point	operator-();
	Fixed	getX(void) const;
	Fixed	getY(void) const;
private:
	Fixed _x;
	Fixed _y;
};

#endif
