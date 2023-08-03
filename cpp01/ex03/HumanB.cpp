#include "HumanB.hpp"

 
HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}
HumanB::~HumanB(){}

void HumanB::attack()
{
    if(this->weapon)
        std::cout << "attacks with their " << weapon->getType() <<std::endl;
    else
        std::cout << "attacks without weapon" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}