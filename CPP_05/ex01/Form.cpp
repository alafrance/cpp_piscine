//
// Created by Alexis Lafrance on 25/09/2021.
//

#include "Form.hpp"

/* CANONICAL FORM */
Form::Form(void): name(""), isSigned(0), gradeToSigned(1), gradeToExecuted(1)  {}

Form::Form(const std::string &name, bool isSigned, const int gradeToSigned, const int gradeToExecuted):
name(name), isSigned(isSigned), gradeToSigned(gradeToSigned), gradeToExecuted(gradeToExecuted) {
	if (gradeToSigned > 150 || gradeToExecuted > 150)
		throw GradeTooLow;
	if (gradeToSigned < 1 || gradeToExecuted < 1)
		throw GradeTooHigh;
}

Form::~Form(void) {}

Form::Form(Form const &src): name(""), gradeToSigned(1), gradeToExecuted(1) {
	*this = src;
}

Form &Form::operator=(Form const &inst) {
	isSigned = inst.isSigned;
	return (*this);
}

/* ACCESSORS */

const std::string &Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getGradeToSigned() const {
	return gradeToSigned;
}

int Form::getGradeToExecuted() const {
	return gradeToExecuted;
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.getName() << " isSigned: " << form.getIsSigned() << " gradeToSigned: " << form.getGradeToSigned()
	   << " gradeToExecuted: " << form.getGradeToExecuted();
	return os;
}

/* MAIN */

void Form::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() > gradeToSigned)
	{
		bureaucrat.signForm(*this);
		throw GradeTooLow;
	}
	isSigned = true;
	bureaucrat.signForm(*this);
}
