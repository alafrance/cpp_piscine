#ifndef HEADER
#define HEADER
#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const& src);
	~Fixed();
	Fixed(int n);
	Fixed(float n);
	int		getRawBits(void) const;
	void	setRawBits(int num);
	int		toInt(void) const ;
	float	toFloat(void) const ;
	Fixed&	operator=(Fixed const& rhs);
private:
	int _num;
	static const int fractional;
};

std::ostream & operator<<(std::ostream &o, Fixed const& rhs);

#endif