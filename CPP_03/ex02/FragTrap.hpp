#ifndef FragTrap_HPP
#define FragTrap_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string name);
	~FragTrap();
	void highFivesGuys(void); 
private:
	
};

#endif