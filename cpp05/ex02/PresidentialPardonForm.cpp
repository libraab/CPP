/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:58 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 10:51:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
PresidentialPardonForm::PresidentialPardonForm(void) : _target("")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;


	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cpy) : _target("")
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;

	*this = cpy;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;

	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (PresidentialPardonForm const &eq) 
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;

	if (this != &eq)
	{
		this->_target = rhs.getTarget(); 
	}

	return (*this);	
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : _target(target)
{
	std::cout << "PresidentialPardonForm string constructor called" << std::endl;


	return ;
}

std::string const	&PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}