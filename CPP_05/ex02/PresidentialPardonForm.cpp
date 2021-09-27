//
// Created by Alexis Lafrance on 26/09/2021.
//

#include "PresidentialPardonForm.hpp"

/* CANONICAL FORM */
PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &inst) {
	(void) inst;
	return (*this);
}

/* ACCESSORS */

/* MAIN */