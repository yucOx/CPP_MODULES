/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:51:18 by mehaydin          #+#    #+#             */
/*   Updated: 2023/08/12 04:51:19 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Fixed
{
private:
    int fixed;
    static const int fract_val = 8;
public:
    Fixed();
    Fixed(const int fi);
    Fixed(const float ff);
    Fixed(const Fixed& copy);
    ~Fixed();

    int	getRawBits() const;
    void    setRawBits(int const raw);
    Fixed &operator=(const Fixed& newFixed);
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &o, const Fixed& fixed);