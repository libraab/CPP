/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:17:32 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/05 11:02:09 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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
Form	*Intern::makeForm(std::string const form_name, std::string const target_name)
{
	std::string form_list[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 3;i++)
	{
		if(form_list[i] == form_name)
		{
			switch (i)
			{
				case 0: 
					std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
					return(new ShrubberyCreationForm(target_name));
				case 1:
					std::cout << "Intern creates RobotomyRequestForm" << std::endl;
					return (new RobotomyRequestForm(target_name));			
				case 2:
					std::cout << "Intern creates PresidentialPardonForm" << std::endl;
					return (new PresidentialPardonForm(target_name));	
			}
		}
	}
	std::cout << "⛔️ WRONG Form Name" << std::endl;
	return (NULL);
}

//*****************************************************************************
// 		                     O P E R A T O R S                  			 //
//*****************************************************************************
Intern	&Intern::operator = (Intern const &op) 
{
	(void)op;
	return (*this);	
}