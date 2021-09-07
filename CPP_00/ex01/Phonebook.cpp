#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	nbContact = 0;
}

Contact* Phonebook::getContact(void) {
	return _Contact;
}

void Phonebook::ft_add(void) {
	_Contact[nbContact].initContact();
	nbContact++;
}

std::string Phonebook::format_string(std::string str) {
	std::string new_str;
	
	for (unsigned long i = 0 ; i < 10 ; i++)
	{
		if (str.size() > i)
			new_str[i] = str[i];
		else
			new_str[i] = '.';
	}
	if (str.size() > 10)
		new_str[9] = '.';
	return new_str;
}

void Phonebook::ft_search(void) {
	if (nbContact == 0)
		std::cout << "\e[0;31mNO CONTACT\e[0m" << std::endl;
	else
	{
		for (int i = 0; i < nbContact; i++)
		{
			std::cout << i << "         |";
			std::cout << format_string(_Contact[i].getFirstname()) << "|";
			std::cout << format_string(_Contact[i].getLastname()) << "|";
			std::cout << format_string(_Contact[i].getNickname()) << "|" << std::endl;
		}
	}
}