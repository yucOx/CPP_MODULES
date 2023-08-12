/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:40:13 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/07 21:40:14 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("WARNING");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("ERROR");
}