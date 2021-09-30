//
// Created by Alexis Lafrance on 9/30/21.
//

#include "Array.hpp"

/* CANONICAL FORM */
Array::Array(void) {}

Array::~Array(void) {}

Array::Array(Array const &src) {
	*this = src;
}

Array &Array::operator=(Array const &inst) {
	(void) inst;
	return (*this);
}

/* ACCESSORS */

/* MAIN */