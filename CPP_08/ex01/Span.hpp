#ifndef Span_HPP
#define Span_HPP
#include <iostream>
#include <vector>
#include <list>
#include <stack>

class Span {
private:
	std::list<int> nb;
	unsigned int size;
public:
	Span();
	Span(unsigned int N);
	Span(Span const& src);
	virtual ~Span();
	void	addNumber(int n);
	void	addNumberRange(std::list<int>::const_iterator it, std::list<int>::const_iterator ite);
	void	addNumberRange(unsigned int range);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	getFirstElement(void) const;
	std::list<int>	getNb(void) const;
	Span& operator=(Span const& rhs);
	class FullIntException : public std::exception {
	public:
		const char * what () const throw ()
		{
			return "The Class is full";
		}
	} FullInt;
	class NoSpanToFindException : public std::exception {
	public:
		const char * what () const throw ()
		{
			return "No span to find. We need to have more than 1 number";
		}
	} NoSpanToFind;
};

#endif