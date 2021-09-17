#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {

}

Point::~Point(void){

}

Point::Point(float x, float y): _x(x), _y(y) {

}

Point::Point(Fixed x, Fixed y): _x(x), _y(y) {

}

Point::Point(Point const& src): _x(src._x), _y(src._y){

}

// const Fixed	Point::getX(void) {
// 	return (_x);
// }

// const Fixed	Point::getY(void) {
// 	return (_y);
// }

Fixed	Point::getX(void) const {
	return (_x);
}

 Fixed	Point::getY(void) const {
	return (_y);
}

Point&	Point::operator=(Point const& rhs){
	(void)rhs;
	return *this;
}

Point	Point::operator-() {
	Point point(-getX(), -getY());

	return (point);
}
