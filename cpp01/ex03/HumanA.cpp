#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), weapon(Weapon)
{
    std::cout << "constructor call\n";
}
HumanA::~HumanA(){};
void HumanA::attack()
{
    std::cout << this->name << "attacks with their " << weapon.getType() << std::endl;
}