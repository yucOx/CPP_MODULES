#include "Zombie.hpp"

int main()
{
    Zombie *zombies =zombieHorde(5, "saz");
    zombies->announce();
    std::cout << "\n";
    delete []zombies;
}