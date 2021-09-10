#include "HumanA.hpp"
#include <iostream>
HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name) {

}

HumanA::~HumanA() {

}

std::string HumanA::getName() {
	return _name;
}

void		HumanA::setName(std::string name) {
	_name = name;
}

Weapon		HumanA::getWeapon() {
	return _weapon;
}

void		HumanA::setWeapon(Weapon weapon) {
	_weapon = weapon;
}

void        HumanA::attack() {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}