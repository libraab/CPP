/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:16 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 15:47:36 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
    RobotomyRequestForm::RobotomyRequestForm(std::string const name): Form("RobotomyRequestForm", 72, 45)
    {
        this->_target = name;
        return ;
    }
    RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy): Form("RobotomyRequestForm", 72, 45)
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
        if (executor.get_bureaucrat_grade() > this->get_form_signing_grade())
            throw Form::GradeTooLowException();
        else
            std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
        return ;
    }

//*****************************************************************************
// 		                     O P E R A T O R S                   			 //
//*****************************************************************************
    RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const &eq)
    {
        if (this != &eq)
            this->_target = eq._target;
        return (*this);
    }
    