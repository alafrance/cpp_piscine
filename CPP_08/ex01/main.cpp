#include <iostream>
#include "Span.hpp"

#define SIZE_SPAN 100
int main() {
	srand(static_cast<unsigned>(time(0)));

	// TEST SHORTEST AND LONGEST SPAN
	try {
		Span sp(SIZE_SPAN);
		sp.addNumberRange(SIZE_SPAN);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::FullIntException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Span::NoSpanToFindException& e) {
		std::cout << e.what() << std::endl;
	}

	// TEST SHORTEST AND LONGEST SPAN
	try {
		Span sp2(SIZE_SPAN);
		sp2.addNumberRange(sp.getNb().begin(), sp.getNb().end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(Span::FullIntException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Span::NoSpanToFindException& e) {
		std::cout << e.what() << std::endl;
	}

	// TEST ADD CLASS FULL
	try {
		std::cout << "TEST FULL : \n";
		Span sp3(6);
		sp3.addNumber(5);
		sp3.addNumber(3);
		sp3.addNumber(120);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
		sp3.addNumber(4);
	}
	catch(Span::FullIntException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Span::NoSpanToFindException& e) {
		std::cout << e.what() << std::endl;
	}

	// TEST ADD CLASS FULL
	try {
		Span sp4;
		sp4.addNumber(3);
		sp4.addNumber(3);
		sp4.addNumber(3);
	}
	catch(Span::FullIntException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Span::NoSpanToFindException& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
