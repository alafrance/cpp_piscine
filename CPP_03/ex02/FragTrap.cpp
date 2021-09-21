#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	_hitpoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Constructor called (ClapTrap) (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name){
	_hitpoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Name constructor called (FragTrap)" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "Destructor called (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "I'm positive high fives request on the standard ouput. I describe EVERYTHING !\n";
}
