//
// Created by Alexis Lafrance on 26/09/2021.
//

#include "RobotomyRequestForm.hpp"

/* CANONICAL FORM */
RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) {
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &inst) {
	(void) inst;
	return (*this);
}

/* ACCESSORS */

/* MAIN */