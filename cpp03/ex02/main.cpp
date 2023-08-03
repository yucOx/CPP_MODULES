#include "FragTrap.hpp"

int main()
{
    FragTrap Donkey("Ali");
    FragTrap Cow("Veli");
    Cow.highFivesGuys();
    Donkey.highFivesGuys();
    Cow.attack("Cat");
    Cow.takeDamage(100);
    Cow.beRepaired(20);
    Cow.highFivesGuys();
}