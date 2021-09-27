//
// Created by Alexis Lafrance on 26/09/2021.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include <iostream>

class RobotomyRequestForm {
private:
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &inst);
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
