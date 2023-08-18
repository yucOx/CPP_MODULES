
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:33:00 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/13 03:33:00 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Donkey("Ali");
    FragTrap Cow("Veli");
    Cow.highFivesGuys();
    Donkey.highFivesGuys();
    Cow.attack("Cat");
    Cow.takeDamage(100);
    Cow.beRepaired(20);
    Cow.highFivesGuys();
}
