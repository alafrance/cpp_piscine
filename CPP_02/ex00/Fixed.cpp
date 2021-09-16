#include "Fixed.hpp"

/* CONSTRUCTOR AND DESTRUCTOR */
Fixed::Fixed(void): _num(0){
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "setRawBits member function called" << std::endl;
	_num = num;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

/* OPERATOR */
Fixed & Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_num = rhs.getRawBits();
	return *this;
}

std::ostream	& operator<<(std::ostream &o, Fixed const& rhs) {
	o << rhs.getRawBits();
	return o;
}

const int Fixed::fractional = 8;