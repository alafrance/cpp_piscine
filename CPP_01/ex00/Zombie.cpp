#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << "Destructor of " << _name << " called" << std::endl;
}

void    Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ" << std::endl;
}

std::string Zombie::getName() {
	return _name;
}

void		Zombie::setName(std::string name) {
	_name = name;
}
