/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/19 17:07:09 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//************************************************************************
//          C O N S T R U C T O R *** D E S T R U C T O R               //
//************************************************************************

    Fixed::Fixed(const int x)
    {
        //std::cout << "Int constructor called" << std::endl;
        this->_fixed = x << this->_bit_nbr;
        return;
    }
    
    Fixed::Fixed(const float x)
    {
        //std::cout << "Float constructor called" << std::endl;
        this->_fixed = roundf(x * (1 << this->_bit_nbr));
        return;
    }
    
    Fixed::Fixed(const Fixed &cpy)
    {
        //std::cout << "Copy constructor called" << std::endl;
        *this = cpy;
        return;
    }

    Fixed::Fixed(void)
    {
        //std::cout << "Default constructor called" << std::endl;
        this->_fixed = 0;
        return;
    }

    Fixed::~Fixed(void)
    {
        //std::cout << "Destructor called" << std::endl;
        return;
    }
    
//**********************************************************************
//                      F U N C T I O N S                             //
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
        return ((float)this->_fixed / (1 << this->_bit_nbr));
    }

    int Fixed::toInt( void ) const
    {
        return(this->_fixed >> this->_bit_nbr);
    }

    Fixed &Fixed::operator = (Fixed const &stream_output)
    {
        this->_fixed = stream_output.getRawBits();
        return (*this);
    }

    std::ostream &operator <<(std::ostream &stream, const Fixed &stream_output)
    {
        return (stream << stream_output.toFloat());
    }
    
    Fixed               &Fixed::min( Fixed &first,  Fixed &second)
    {
        if (first < second)
            return (first);
        else
            return (second);
    }
    Fixed               &Fixed::max( Fixed &first,  Fixed &second)
    {
        if (first > second)
            return (first);
        else
            return (second);
    }
    
    const Fixed         &Fixed::min(const Fixed &first, const Fixed &second)
    {
        if (first.toFloat() < second.toFloat())
            return (first);
        else
            return (second);
    }
    const Fixed         &Fixed::max(const Fixed &first, const Fixed &second)
    {
        if (first.toFloat() > second.toFloat())
            return (first);
        else
            return (second);
    }
    
//*****************************************************************
//              B I N A R Y *** O P E R A T O R S                //
//*****************************************************************

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
    
//*****************************************************************
//          C O M P A R A I S O N *** O P E R A T O R S          //
//*****************************************************************

    bool        Fixed::operator == (const Fixed &d_eq)
    {
        if(this->_fixed == d_eq.getRawBits())
            return (true);
        else
            return (false);
    }
    bool        Fixed::operator != (const Fixed &dif)
    {
        if(this->_fixed != dif.getRawBits())
            return (true);
        else
            return (false);
    }
    bool        Fixed::operator <= (const Fixed &inf_eq)
    {
        if(this->_fixed <= inf_eq.getRawBits())
            return (true);
        else
            return (false);
    }
    bool       Fixed::operator >= (const Fixed &sup_eq)
    {
        if(this->_fixed >= sup_eq.getRawBits())
            return (true);
        else
            return (false);
    }
    bool        Fixed::operator > (const Fixed &sup)
    {
        if(this->_fixed == sup.getRawBits())
            return (true);
        else
            return (false);
    }
    bool        Fixed::operator < (const Fixed &inf)
    {
        if(this->_fixed < inf.getRawBits())
            return (true);
        else
            return (false);
    }
    
//******************************************************************
//                  U N A R Y  ****** O P E R A T O R S           //   
//******************************************************************

    Fixed       &Fixed::operator ++ ()
    {
        this->_fixed++;
        return (*this);
    }
    Fixed       Fixed::operator ++ (int)
    {
        Fixed x = *this;
        ++*this;
        return (x);   
    }
    Fixed       &Fixed::operator -- ()
    {
        this->_fixed--;
        return (*this);
    }
    Fixed       Fixed::operator -- (int)
    {
        Fixed x = *this;
        --*this;
        return (x);
    }
