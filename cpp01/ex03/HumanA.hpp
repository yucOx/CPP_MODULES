#pragma once

#include "Weapon.hpp"
#include "iostream"
class HumanA
{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string name, Weapon &Weapon);
    ~HumanA();

    void attack();
};

