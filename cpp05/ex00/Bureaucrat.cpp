/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:39 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/28 10:57:15 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
Bureaucrat::Bureaucrat(void) 
{
    std::cout << "Default constructor called" << std::endl;
    return;   
}
Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Default destructor called" << std::endl;
    return;   
}
Bureaucrat::Bureaucrat(std::string const name, int const grade)
{
   this->_name = name;
   this->_grade = grade;
}
//************************************************************
//                      F U N C T I O N                     //
//************************************************************