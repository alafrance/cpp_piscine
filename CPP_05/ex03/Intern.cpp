//
// Created by Alexis Lafrance on 9/27/21.
//

#include "Intern.hpp"

/* CANONICAL FORM */
Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &inst) {
	(void) inst;
	return (*this);
}

/* ACCESSORS */

/* MAIN */