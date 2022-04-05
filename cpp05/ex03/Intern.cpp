/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:17:32 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/05 09:26:49 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
Intern::Intern(void) {} ;
Intern::Intern(const Intern &cpy)
{
    *this = cpy;
}
Intern::~Intern(void) {} ;

//*****************************************************************************
// 		                     F U N C T I O N S                  			 //
//*****************************************************************************
Form	*Intern::makeForm(const std::string &form_name, const std::string &target_name)
{
	
}

Form	*Intern::Shrubbery_form(std::string const &target_name) const
{
	std::cout << "Intern Fill the form Shrubbery" << std::endl;
	return (new ShrubberyCreationForm(target_name));
}

Form	*Intern::Robotomy_form(std::string const &target_name) const
{
	std::cout << "Intern fill the form Robotomy" << std::endl;
	return (new RobotomyRequestForm(target_name));
}

Form	*Intern::Presidential_form(std::string const &target_name) const
{
	std::cout << "Intern fill the form PresidentialPardon" << std::endl;
	return (new PresidentialPardonForm(target_name));
}
const char 	*Intern::Invalid_form::what() const throw()
{
	return ("Error: invalid form");
}

std::string	Intern::form_list[] = {"shrubbery", "robotomy", "presidential"};

//*****************************************************************************
// 		                     O P E R A T O R S                  			 //
//*****************************************************************************
Intern	&Intern::operator = (Intern const &op) 
{
	if (&op != this)
	{
		(void)&op;
	}

	return (*this);	
}