/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:33:02 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/13 03:33:02 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setVar(name,100,100,30);
    std::cout << this->getName() << ": FragTrap Constructor call\n";
}
FragTrap::~FragTrap()
{
    std::cout << this->getName() << ": FragTrap Destructor call\n";
}
void FragTrap::highFivesGuys(void)
{
    if(this->getHitPoint() <= 0)
        return;
    std::cout << this->getName() << ": Give me your f*reaking high5 to me brother!\n";
}