/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:51:37 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/12 04:51:37 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "iostream"

class Fixed
{
private:
    int fixed;
    static const int frac_val = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy);
    Fixed &operator=(const Fixed& new_fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
