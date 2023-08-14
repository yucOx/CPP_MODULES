/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:34:39 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/13 03:34:39 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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