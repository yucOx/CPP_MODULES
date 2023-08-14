/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:33:52 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/13 03:33:52 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setVar(name,100,50,20);
    std::cout << this->getName() <<": ScavTrap Constructor call\n";
}
ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}
ScavTrap::~ScavTrap()
{
    std::cout << this->getName() << ": ScavTrap Destructor call\n";
}
ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    this->setVar(copy.getName(), copy.getHitPoint(),copy.getEnergyPoint(),copy.getAttackDamage());
    return *this;
}
void ScavTrap::guardGate()
{
    std::cout <<getName() << " ScavTrap is now in Gatekeeper mode.\n";
}

