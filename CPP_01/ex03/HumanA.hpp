#ifndef  HUMAN_A
#define HUMAN_A
#include <iostream>
#include "Weapon.hpp"
class HumanA {
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void        attack();
    std::string getName();
    void        setName(std::string name);
    Weapon      getWeapon();
    void        setWeapon(Weapon weapon);
private:
    Weapon &_weapon;
    std::string _name;
};

#endif // ! HUMAN_A