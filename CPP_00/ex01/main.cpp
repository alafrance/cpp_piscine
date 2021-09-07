# include "Phonebook.hpp"
# include <iostream>

int main() {
	std::string buf = "";
	bool loop = true;
	Phonebook phonebook;

	std::cout << "Phonebook > ";
	while (std::getline(std::cin, buf) && buf != "EXIT" && buf != "exit") {
		if (buf == "ADD" || buf == "add") {
			phonebook.ft_add();
		} else if (buf ==  "SEARCH" || buf == "search") {
			phonebook.ft_search();
		} else if (buf ==  "EXIT" || buf == "exit") {
			loop = false;
		}
		buf = "";
		std::cout << "Phonebook > ";
	}
}