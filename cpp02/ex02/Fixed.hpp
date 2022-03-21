/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:05 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/19 14:29:37 by abouhlel         ###   ########.fr       */
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
            float toFloat( void ) const;
            int toInt( void ) const;
            
            Fixed       &operator = (const Fixed &equal);
            Fixed       operator * (const Fixed &multiply);
            Fixed       operator / (const Fixed &by);
            Fixed       operator - (const Fixed &minus);
            Fixed       operator + (const Fixed &plus);

            bool        operator == (const Fixed &d_eq);
            bool        operator != (const Fixed &dif);
            bool        operator <= (const Fixed &inf_eq);
            bool        operator >= (const Fixed &sup_eq);
            bool        operator > (const Fixed &sup);
            bool        operator < (const Fixed &inf);

            Fixed       &operator ++ ();
            Fixed       operator ++ (int);
            Fixed       &operator -- ();
            Fixed       operator -- (int);
            
            static Fixed               &min( Fixed &first,  Fixed &second);
            static Fixed               &max( Fixed &first,  Fixed &second);
            static const Fixed         &min(const Fixed &first, const Fixed &second);
            static const Fixed         &max(const Fixed &first, const Fixed &second);
            
    private:
            int                 _fixed;
            static const int    _bit_nbr = 8;
        
};

std::ostream &operator <<(std::ostream &stream, const Fixed &stream_output);

