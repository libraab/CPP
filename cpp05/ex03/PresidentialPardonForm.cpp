/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:58 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 15:48:04 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
	PresidentialPardonForm::PresidentialPardonForm(std::string const name): Form("PresidentialPardonForm", 25, 5)
	{
		this->_target = name;
		return ;
	}
	PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy): Form("PresidentialPardonForm", 25, 5)
	{
		*this = cpy;
		return ;
	}
	PresidentialPardonForm::~PresidentialPardonForm(void)
	{
		return ;
	}

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
	void PresidentialPardonForm::execute(Bureaucrat const &executor) const
	{
		if (executor.get_bureaucrat_grade() > this->get_form_signing_grade())
			throw Form::GradeTooLowException();
		else
			std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
		return ;
	}

//*****************************************************************************
// 		                     O P E R A T O R S                   			 //
//*****************************************************************************
	PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const &eq)
	{
		if (this != &eq)
			this->_target = eq._target;
		return (*this);
	}