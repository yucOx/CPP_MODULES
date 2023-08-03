#pragma once 

#include <iostream>
#include <string>
class ClapTrap
{
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setVar(std::string name,int hitPoint, int energyPoint, int attackDamage);
    std::string getName() const;
    int getHitPoint() const;
    int getEnergyPoint() const;
    int getAttackDamage() const;
};
