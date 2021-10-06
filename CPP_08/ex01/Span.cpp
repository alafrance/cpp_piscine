#include "Span.hpp"
#include <cmath>
#include <ctime>
#include <cstdlib>
/* CANONICAL FORM */
Span::Span(void): size(0){
}

Span::Span(unsigned int N): size(N){

}

Span::~Span(void){
}

Span::Span(Span const& src){
	*this = src;
}

void	Span::addNumber(int n) {
	if (nb.size() == size)
		throw FullInt;
	nb.push_back(n);
}

void	Span::addNumberRange(unsigned int range) {
	if (size < static_cast<unsigned int>(nb.size()) + range)
		throw FullInt;
	srand(static_cast<unsigned>(time(0)));
	for(unsigned int i = 0 ; i < range ; i++) {
		nb.push_back(rand());
	}
}

void	Span::getFirstElement(void) const {
	std::cout << nb.front() << std::endl;
}

int Span::shortestSpan() const {
	if (nb.size() <= 1)
		throw NoSpanToFind;
	std::list<int>::const_iterator it = nb.begin();
	std::list<int>::const_iterator it2 = nb.begin();
	it2++;
	int tmp = static_cast<int>(std::abs(*it2 - *it));
	for (unsigned long i = 1 ; i < nb.size() ; i++) {
		if (tmp > static_cast<int>(std::abs(*it2 - *it)))
			tmp = static_cast<int>(std::abs(*it2 - *it));
		it++;
		it2++;
	}
	return (static_cast<int>(tmp));
}

int Span::longestSpan() const {
	if (nb.size() <= 1)
		throw NoSpanToFind;
	std::list<int>::const_iterator it = nb.begin();
	std::list<int>::const_iterator it2 = nb.begin();
	it2++;
	int tmp = static_cast<int>(std::abs(*it2 - *it));
	for (unsigned long i = 1 ; i < nb.size() ; i++) {
		if (tmp < static_cast<int>(std::abs(*it2 - *it)))
			tmp = static_cast<int>(std::abs(*it2 - *it));
		it++;
		it2++;
	}
	return (static_cast<int>(tmp));
}

Span&	Span::operator=(Span const& rhs){
	size = rhs.size;
	for(std::list<int>::const_iterator i = rhs.nb.begin(); i != rhs.nb.end() ; i++)
		nb.push_back(*i);
	return *this;
}
/* ACCESSORS */
std::list<int>	Span::getNb(void) const {
	return nb;
}

/* MAIN */