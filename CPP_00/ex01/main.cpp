# include "Phonebook.hpp"
# include <iostream>

int main() {
	bool loop = true;
	while (loop) {
		std::string line;
		std::cin >> line;
		if (std::strcmp(line.c_str(), "ADD")) {

		} else if (std::strcmp(line.c_str(), "SEARCH")) {

		} else if (std::strcmp(line.c_str(), "EXIT")) {
			loop = false;
		}
		std::cout << line.c_str();
	} 
}