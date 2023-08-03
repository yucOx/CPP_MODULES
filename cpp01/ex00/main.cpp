#include "Zombie.hpp"

int main()
{
    Zombie *deneme = newZombie("samet");
    deneme->announce();
    Zombie zombi("saz");
    zombi.announce();
    delete deneme;
    randomChump("gitar");
}