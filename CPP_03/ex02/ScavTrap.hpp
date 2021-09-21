#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();
private:
	
};

#endif