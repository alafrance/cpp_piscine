//
// Created by Alexis Lafrance on 25/09/2021.
//
#include "Bureaucrat.hpp"

Bureaucrat 	initBureaucrat() {
	std::string bufName;
	std::string bufGrade;

	std::cout << "Enter your name : ";
	std::getline(std::cin, bufName);
	std::cout << "Enter your grade : ";
	std::getline(std::cin, bufGrade);
	Bureaucrat bureaucrat(bufName, atoi(bufGrade.c_str()));
	return bureaucrat;
}

int main() {
	try {
		Bureaucrat bureaucrat(initBureaucrat());
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}


