/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/16 16:39:21 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//************************************************************************
    Fixed::Fixed(const int x)
    {
        std::cout << "Int constructor called" << std::endl;
        this->_fixed = x << this->_bit_nbr;
        return;
    }
    
    Fixed::Fixed(const float x)
    {
        std::cout << "Float constructor called" << std::endl;
        this->_fixed = roundf(x * (1 << this->_bit_nbr));
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


    float Fixed::toFloat( void ) const
    {
        return ((float)this->_fixed / (float)(1 << this->_bit_nbr));
    }

    int Fixed::toInt( void ) const
    {
        return(this->_fixed >> this->_bit_nbr);
    }
//**********************************************************************

    Fixed &Fixed::operator = (Fixed const &stream_output)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixed = stream_output.getRawBits();
        return (*this);
    }

    std::ostream &operator <<(std::ostream &stream, const Fixed &stream_output)
    {
        return (stream << stream_output.toFloat());
    }
    
//*********************************************************
    Fixed       Fixed::operator * (const Fixed &multiply)
    {
        return (Fixed(this->toFloat() * multiply.toFloat()));
    }
    Fixed       Fixed::operator / (const Fixed &by)
    {
        return (Fixed(this->toFloat() / by.toFloat()));
    }
    Fixed       Fixed::operator - (const Fixed &minus)
    {
        return (Fixed(this->toFloat() - minus.toFloat()));
    }
    Fixed       Fixed::operator + (const Fixed &plus)
    {
        return (Fixed(this->toFloat() + plus.toFloat()));
    }
//*********************************************************
