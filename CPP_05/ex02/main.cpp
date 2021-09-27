//
// Created by Alexis Lafrance on 25/09/2021.
//
#include "Bureaucrat.hpp"
#include "Form.hpp"
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

Form		initForm() {
	std::string bufName;
	std::string bufGradeSigned;
	std::string bufGradeExecuted;

	std::cout << "Enter Form's name's : ";
	std::getline(std::cin, bufName);
	std::cout << "Enter grade to signed : ";
	std::getline(std::cin, bufGradeSigned);
	std::cout << "Enter grade to executed : ";
	std::getline(std::cin, bufGradeExecuted);
	Form form(bufName, 0, atoi(bufGradeSigned.c_str()), atoi(bufGradeExecuted.c_str()));
	return form;
}

int main() {
	try {
		Bureaucrat bureaucrat(initBureaucrat());
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		Form		form(initForm());
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}


