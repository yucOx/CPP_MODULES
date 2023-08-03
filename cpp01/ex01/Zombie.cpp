#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}
void Zombie::announce()
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ...";
}
Zombie::Zombie()
{
    std::cout << this->name << " Constructor call";
}
Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed";
}
