#include "Fixed.hpp"

Fixed::Fixed(void): _num(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n): _num(n) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src){
	std::cout << "Copy constructor called" << std::endl;
	_num = src.getRawBits();
}

void	Fixed::setRawBits(int num) {
	std::cout << "setRawBits member function called" << std::endl;
	_num = num;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

Fixed & Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_num = rhs.getRawBits();
	return *this;
}

Fixed & Fixed::operator=(int const& n) {
	std::cout << "Assignation operator called" << std::endl;
	_num = n;
	return *this;
}

std::ostream	& operator<<(std::ostream &o, Fixed const& rhs) {
	o << rhs.getRawBits();
	return o;
}

const int Fixed::fractional = 8;