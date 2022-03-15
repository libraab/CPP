/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:05 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/15 15:08:30 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>

class Fixed
{
    public:
            Fixed(void);
            Fixed(const Fixed &cpy);
            ~Fixed(void);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            Fixed &operator = (Fixed const &x);
    private:
            int                 _fixed;
            static const int    _x = 8;
        
};
