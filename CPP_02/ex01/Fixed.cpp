#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractional = 8;

/* CONSTRUCTOR AND DESTRUCTOR */
Fixed::Fixed(void): _num(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n): _num(n * pow(2, fractional)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n){
	_num = roundf(n * pow(2, fractional));
	std::cout << "Float constructor called " <<  std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src){
	std::cout << "Copy constructor called" << std::endl;
	_num = src.getRawBits();
}

/* ACCESSORS */

void	Fixed::setRawBits(int num) {
	_num = num;
}

int		Fixed::getRawBits(void) const {
	return (this->_num);
}

int		Fixed::toInt(void) const {
	return (int)roundf(_num / pow(2, fractional));
}

float	Fixed::toFloat(void) const {
	return ((float)_num / pow(2, fractional));
}

/* OPERATOR */
Fixed & Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_num = rhs.getRawBits();
	return *this;
}

std::ostream	& operator<<(std::ostream &o, Fixed const& rhs) {
	o << rhs.toFloat();
	return o;
}
