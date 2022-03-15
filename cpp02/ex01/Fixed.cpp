/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/15 17:00:53 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//**********************************************************************
    Fixed::Fixed(const int x)
    {
        std::cout << "Int constructor called" << std::endl;
        this->_fixed = x << this->_bit_nbr;
        return;
    }
    
    Fixed::Fixed(const float x)
    {
        std::cout << "Float constructor called" << std::endl;
        this->_bit_nbr = x << this->_fixed;
        return;
    }
    
    Fixed::Fixed(const Fixed &cpy)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = cpy;
        return;
    }

    Fixed::Fixed(void)
    {
        std::cout << "Default constructor called" << std::endl;
        this->_fixed = 0;
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
        return(this->_fixed);
    }

    void Fixed::setRawBits(int const raw)
    {
        this->_fixed = raw;
        return;
    }

    Fixed &Fixed::operator = (Fixed const &stream_output)
    {
        std::cout << "Assignment operator called" << std::endl;
        this->_fixed = stream_output.getRawBits();
        return (*this);
    }

    float Fixed::toFloat( void ) const
    {
        return ((float)this->_fixed;
    }

    int Fixed::toInt( void ) const
    {
        return (int)this->_fixed;
    }
//**********************************************************************
