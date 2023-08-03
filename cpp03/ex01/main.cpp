#include "ScavTrap.hpp"
int main()
{
    
    {
        ClapTrap b("Kojima");
        b.attack("Kapi");
        b.takeDamage(10);
        b.beRepaired(10);
    }
    {
        ScavTrap a("Iskender");
        a.attack("Kadirin Yardimcisi");
        a.takeDamage(20);
        a.beRepaired(20);
        a.guardGate();
    }

    
}