#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractional = 8;

/* CONSTRUCTOR AND DESTRUCTOR */
Fixed::Fixed(void): _raw(0){
}

Fixed::Fixed(int n): _raw(n * pow(2, fractional)) {
}

Fixed::Fixed(float n){
	_raw = roundf(n * pow(2, fractional));
}

Fixed::~Fixed(void){
}

Fixed::Fixed(Fixed const& src){
	*this = src;
}

/* ACCESSORS */

void	Fixed::setRawBits(int raw) {
	_raw = raw;
}

int		Fixed::getRawBits(void) const {
	return (this->_raw);
}

int		Fixed::toInt(void) const {
	return (int)roundf(_raw / pow(2, fractional));
}

float	Fixed::toFloat(void) const {
	return ((float)_raw / pow(2, fractional));
}

/* OPERATOR */
Fixed & Fixed::operator=(Fixed const& rhs) {
	_raw = rhs.getRawBits();
	return *this;
}

std::ostream	& operator<<(std::ostream &o, Fixed const& rhs) {
	o << rhs.toFloat();
	return o;
}

/* COMPARISON OPERATOR */

bool	Fixed::operator>(Fixed const& rhs) {
	return _raw > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const& rhs) {
	return _raw < rhs.getRawBits();

}

bool	Fixed::operator>=(Fixed const& rhs) {
	return _raw >= rhs.getRawBits();

}

bool	Fixed::operator<=(Fixed const& rhs) {
	return _raw <= rhs.getRawBits();

}

bool	Fixed::operator==(Fixed const& rhs) {
	return _raw == rhs.getRawBits();

}

bool	Fixed::operator!=(Fixed const& rhs) {
	return _raw != rhs.getRawBits();

}

/* 	ARITHMETIC OPERATORS */

Fixed	Fixed::operator+(Fixed const& rhs) {
	return ((_raw + rhs.getRawBits()) / powf(2, 8));
}

Fixed	Fixed::operator-(Fixed const& rhs) {
	return ((_raw - rhs.getRawBits()) / powf(2, 8));
}

Fixed	Fixed::operator*(Fixed const& rhs) {
	return (_raw * rhs.getRawBits() / powf(2, 16));
}

Fixed Fixed::operator/(Fixed const& rhs) {
	return ((float)_raw / (float)rhs.getRawBits());
}

Fixed	Fixed::operator-() {
	Fixed fixed(*this);

	fixed._raw = -fixed._raw;
	return (fixed);
}

/* INCREMENT OPERATORS */

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	_raw++;
	return tmp;
}

Fixed&	Fixed::operator++() {
	_raw++;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	_raw--;
	return tmp;
}

Fixed&	Fixed::operator--() {
	_raw--;
	return *this;
}
