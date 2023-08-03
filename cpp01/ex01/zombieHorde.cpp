#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombies = new Zombie[N];
    while(N > i)
    {
        zombies[i].set_name(name);
        zombies[i].announce();
        i++;
    }
    return(zombies);
}
