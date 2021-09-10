#include <iostream>


void    byRef(std::string &ref) {
    ref += " and ponnies";
}

void byPtr(std::string *ptr) {
    *ptr += " and ponnies";
}

void    byConstPtr(std::string const *ptr) {
    std::cout << *ptr << std::endl;
}

void    byConstRef(std::string const &ref) {
    std::cout << ref << std::endl;
}

int main() {
    std::string str = "coucou";
    std::string& ref = str;
    std::string *ptr = &str;

    byRef(ref);
    byConstRef(ref);
}