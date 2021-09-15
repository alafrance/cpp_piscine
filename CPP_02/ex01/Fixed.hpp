#ifndef HEADER
#define HEADER
#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const& src);
	~Fixed();
	Fixed(int n);
	int		getRawBits(void) const;
	void	setRawBits(int num);
	Fixed&	operator=(Fixed const& rhs);
	Fixed&	operator=(int const& n);
private:
	int _num;
	static const int fractional;
};
std::ostream & operator<<(std::ostream &o, Fixed const& rhs);

#endif