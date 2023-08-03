#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Constructor call\n";
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout << Zombie::name <<" -Destructor call\n";
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}