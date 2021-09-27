//
// Created by Alexis Lafrance on 26/09/2021.
//

#include "ShrubberyCreationForm.hpp"

/* CANONICAL FORM */
ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst) {
	(void) inst;
	return (*this);
}

/* ACCESSORS */

/* MAIN */