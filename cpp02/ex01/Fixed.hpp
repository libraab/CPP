/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:05 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/15 16:53:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

class Fixed
{
    public:
            Fixed(const int x);
            Fixed(const float x);
            Fixed(const Fixed &cpy);
            Fixed(void);
            ~Fixed(void);
            
            int getRawBits( void ) const;
            void setRawBits(int const raw);
            Fixed &operator = (const Fixed &stream_output);
            
            float toFloat( void ) const;
            int toInt( void ) const;
            
    private:
            int                 _fixed;
            static const int    _bit_nbr = 8;
        
};

std::ostream &operator <<(std::ostream &stream, const Fixed &stream_output);

