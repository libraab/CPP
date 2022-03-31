/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:58:27 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 14:30:41 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
    ShrubberyCreationForm::ShrubberyCreationForm(std::string const name): Form("ShrubberyCreationForm", 25, 5)
    {
        this->_target = name;
        return ;
    }
    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy): Form("ShrubberyCreationForm", 25, 5)
    {
        *this = cpy;
        return ;
    }
    ShrubberyCreationForm::~ShrubberyCreationForm(void)
    {
        return ;
    }

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
    void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
    {
        if (!this->get_form_signed_value())
            throw Form::GradeTooLowException();
        else if (this->get_form_signing_grade() < executor.get_bureaucrat_grade())
            throw Form::GradeTooLowException();
        else
            std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
        return ;
    }

//*****************************************************************************
// 		                     O P E R A T O R S                   			 //
//*****************************************************************************
    ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const & rhs)
    {
        if (this != &rhs)
            this->_target = rhs._target;
        return (*this);
    }