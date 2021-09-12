#include "Karen.hpp"
#include <iostream>

Karen::Karen() {

}

Karen::~Karen() {

}

void Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;	
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level ) {
	std::string	level_string[4];
	typedef void (Karen::*ptrMemFunc) (void);
	Karen karen;

	ptrMemFunc level_fct[4];
	level_fct[0] = &Karen::debug;
	level_string[0] = "DEBUG";
	level_fct[1] = &Karen::info;
	level_string[1] = "INFO";
	level_fct[2] = &Karen::warning;
	level_string[2] = "WARNING";
	level_fct[3] = &Karen::error;
	level_string[3] = "ERROR";

	for (int i = 0 ; i < 4 ; i++)
		if (level_string[i] == level)
		{
			for (int j = i ; j < 4 ; j++)
			{
				std::cout << "[" << level_string[j] << "]" << std::endl;
				(karen.*level_fct[j])();
				if (j != 3)
					std::cout << std::endl;
			}
			return ;
		}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}