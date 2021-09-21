#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap playerA("Gotaga");
	ClapTrap playerB("Gataga");
	ClapTrap playerC(playerA);

	playerC.setAttackDamage(20);
	playerC.setName("Gutugu");
	playerA.attack(playerB.getName());
	playerB.takeDamage(playerA.getAttackDamage());
	playerC.attack(playerA.getName());
	playerA.takeDamage(playerC.getAttackDamage());
	playerC.beRepaired(20);
}
