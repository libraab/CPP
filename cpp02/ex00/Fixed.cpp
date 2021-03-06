/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/15 16:21:07 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//**********************************************************************
    Fixed::Fixed(void)
    {
        std::cout << "Default constructor called" << std::endl;
        this->_fixed = 0;
        return;
    }
    
    Fixed::Fixed(const Fixed &cpy)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = cpy;
        return;
    }

    Fixed::~Fixed(void)
    {
        std::cout << "Destructor called" << std::endl;
        return;
    }
//**********************************************************************



//**********************************************************************
    int Fixed::getRawBits(void) const
    {
        std:: cout << "getRawBits member function called" << std::endl;
        return(this->_fixed);
    }
//**********************************************************************
    void Fixed::setRawBits(int const raw)
    {
        std:: cout << "setRawBits member function called" << std::endl;
        this->_fixed = raw;
        return;
    }
//**********************************************************************
    Fixed &Fixed::operator = (Fixed const &x)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixed = x.getRawBits();
        return (*this);
    }
//**********************************************************************
