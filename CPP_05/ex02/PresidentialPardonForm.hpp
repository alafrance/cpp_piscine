//
// Created by Alexis Lafrance on 26/09/2021.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include <iostream>

class PresidentialPardonForm {
private:
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &inst);
};

#endif //EX02_PRESIDENTIALPARDONFORM_HPP
