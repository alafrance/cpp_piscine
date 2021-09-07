#include "Sample.hpp"
#include <iostream>

Sample::Sample() {
    std::cout << "Constructor called" << std::endl;
}

void Sample::bar(void) const {
    std::cout << "Function called" << std::endl;
}

Sample::~Sample() {
    std::cout << "Destructor called" << std::endl;
}