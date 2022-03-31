/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:16 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 14:28:02 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
    RobotomyRequestForm::RobotomyRequestForm(std::string const name): Form("RobotomyRequestForm", 25, 5)
    {
        this->_target = name;
        return ;
    }
    RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy): Form("RobotomyRequestForm", 25, 5)
    {
        *this = cpy;
        return ;
    }
    RobotomyRequestForm::~RobotomyRequestForm(void)
    {
        return ;
    }

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
    void RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
    RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const & rhs)
    {
        if (this != &rhs)
            this->_target = rhs._target;
        return (*this);
    }
    