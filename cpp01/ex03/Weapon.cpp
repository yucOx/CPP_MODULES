#include "Weapon.hpp"
Weapon::Weapon()
{
    std::cout << "Constructor call\n";
}
Weapon::~Weapon()
{
    std::cout << "Destructor call\n";
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}