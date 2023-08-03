#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"
#include "iostream"
class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon &weapon);
};


#endif