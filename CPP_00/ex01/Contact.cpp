#include "Contact.hpp"
# include <iostream>

Contact::Contact(){
}

std::string    Contact::input(std::string prompt) {
	std::string buf;

	std::cout << prompt;
	std::getline(std::cin, buf);
	return buf;
}

void    Contact::initContact() {
	setFirstname(input("Firstname : "));
	setLastname(input("Lastname : "));
	setNickname(input("Nickname : "));
	setPhoneNumber(atoi(input("Phone number : ").c_str()));
	setDarkestSecret(input("Darkest secret : "));
}

void    Contact::displayContact() {
	std::cout << "Firstname : " << getFirstname() << std::endl;
	std::cout << "Lastname : " << getLastname() << std::endl;
	std::cout << "Nickname : " << getNickname() << std::endl;
	std::cout << "Phone number : " << getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << getDarkestSecret() << std::endl;
}

std::string Contact::getFirstname() const {
	return _firstname;
}

std::string Contact::getLastname() const {
	return _lastname;
}

std::string Contact::getDarkestSecret() const {
	return _darkestSecret;
}

std::string Contact::getNickname() const {
	return _nickname;
}

int 		Contact::getPhoneNumber() const {
	return _phoneNumber;
}

void 		Contact::setFirstname(std::string firstname){
	_firstname =  firstname;
}

void 		Contact::setLastname(std::string lastname) {
	_lastname = lastname;
}

void 		Contact::setDarkestSecret(std::string darkest_secret) {
	_darkestSecret = darkest_secret;
}

void 		Contact::setNickname(std::string nickname) {
	_nickname = nickname;
}

void 		Contact::setPhoneNumber(int phone_number) {
	_phoneNumber = phone_number;
}
