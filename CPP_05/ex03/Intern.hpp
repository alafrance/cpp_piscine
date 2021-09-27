//
// Created by Alexis Lafrance on 9/27/21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include <iostream>

class Intern
{
private:
public:
	Intern();
	Intern(Intern const &src);
	virtual ~Intern();
	Intern &operator=(Intern const &inst);
};

#endif //EX03_INTERN_HPP
