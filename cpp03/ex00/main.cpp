#include "ClapTrap.hpp"

int main()
{
    ClapTrap y("Yucem");
    ClapTrap saz("42 Bot");
    int i = 0;
    saz.takeDamage(31);
    saz.beRepaired(10);
    y.beRepaired(10);
    y.beRepaired(31);
    while(i < 10)
    {
    y.attack("Frontend Developers");
    i++;
    }
}