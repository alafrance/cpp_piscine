#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void){

}

DiamondTrap::DiamondTrap(const std::string name): FragTrap(name), ScavTrap(name) {
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void){

}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "\n--- DIAMONDTRAP : WHO AM I ---\n";
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "name: " << _name << ", hitpoints: " << _hitpoints << ", energyPoint: " << _energyPoint << " and attackDamage: " << _attackDamage << std::endl;
	std::cout << "--- DIAMONDTRAP : WHO AM I ---\n\n";
}