#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setVar(name,100,50,20);
    std::cout << this->getName() <<": ScavTrap Constructor call\n";
}
ScavTrap::~ScavTrap()
{
    std::cout << this->getName() << ": ScavTrap Destructor call\n";
}
void ScavTrap::guardGate()
{
    std::cout <<getName() << " ScavTrap is now in Gatekeeper mode.\n";
}

