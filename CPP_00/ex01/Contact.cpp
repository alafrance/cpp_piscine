#include "Contact.hpp"
# include <iostream>

Contact::Contact() {
       
}

std::string Contact::getFirstname() {
    return _firstname;
}

std::string Contact::getLastname() {
    return _lastname;
}

std::string Contact::getDarkest_secret() {
    return _darkest_secret;
}

std::string Contact::getNickname() {
    return _nickname;
}

int 		Contact::getPhone_number() {
    return _phone_number;
}

void 		Contact::setFirstname(std::string firstname){
    _firstname =  firstname;
}

void 		Contact::setLastname(std::string lastname) {
    _lastname = lastname;
}

void 		Contact::setDarkest_secret(std::string darkest_secret) {
    _darkest_secret = darkest_secret;
}

void 		Contact::setNickname(std::string nickname) {
    _nickname = nickname;
}

void 		Contact::setPhone_number(int phone_number) {
    _phone_number = phone_number;
}
