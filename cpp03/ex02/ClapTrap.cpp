#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10),attackDamage(0)
{
    std::cout << "Constructor call" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor call" << std::endl;
}
void ClapTrap::setVar(std::string name,int hitPoint, int energyPoint, int attackDamage)
{
    this->name = name;
    this->hitPoint = hitPoint;
    this->energyPoint = energyPoint;
    this->attackDamage = attackDamage;
}
std::string ClapTrap::getName() const
{
    return(this->name);
}
int ClapTrap::getHitPoint() const
{
    return(this->hitPoint);
}
int ClapTrap::getEnergyPoint() const
{
    return(this->energyPoint);
}
int ClapTrap::getAttackDamage() const
{
    return(this->attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hitPoint <= 0)
        return;
    if(this->energyPoint <= 0)
    {
        std::cout << this->name << " cant attack because of energy\n";
        return;
    }
    if(this->energyPoint > 0)
    {
        std::cout << this->name << " attack " << target << " causing " << this->attackDamage << " points of damage!\n"; 
        this->energyPoint -= 1;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoint <= 0)
        return;
    if(int(amount) > 0)
    {
        std::cout << this->name << " has taken " << (int)amount << " damage!" << std::endl;
        this->hitPoint -= (int)amount;
    }

    if(this->hitPoint <= 0)
    {
        std::cout << this->name << " isn't in this world anymore..\n";
    }

}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hitPoint <= 0)
        return;
    if(this->energyPoint <= 0)
    {
        std::cout << this->name << " cant heal itself because of energy!\n";
        return;
    }
    if(this->energyPoint > 0 && (int)amount >= 0)
    {
        std::cout << this->name << " has healed " << amount << " point\n";
        this->hitPoint += (int)amount;
        this->energyPoint -= 1;
    }
}