#pragma once
#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void		announce();
	std::string	getName();
	void		setName(std::string name);
private:
	std::string _name;
};
#endif // ZOMBIE