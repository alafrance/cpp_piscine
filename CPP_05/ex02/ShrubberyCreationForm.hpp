//
// Created by Alexis Lafrance on 26/09/2021.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include <iostream>

class ShrubberyCreationForm {
private:
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &inst);
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
