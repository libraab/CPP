/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:21:51 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/29 15:22:23 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
Form::Form(std::string const name, int const grade1, int const grade2) : _name(name), _signing_grade(grade2), _executing_grade(grade1)
{
	this->_signed_value = 0;
	if (_executing_grade < 1 || _signing_grade < 1)
	{
		std::cout << "⛔️ WRONG GRADE" << std::endl;
		throw Form::GradeTooHighException();
	}
	if (_executing_grade > 150 || _signing_grade > 150)
	{
		std::cout << "⛔️ WRONG GRADE" << std::endl;
		throw Form::GradeTooLowException();
	}
}
Form::~Form(void)
{
	return;   
}
Form::Form(const Form &cpy) : _name(cpy.get_form_name()), _signing_grade(cpy.get_form_signing_grade()), _executing_grade(cpy.get_form_executing_grade())
{
	*this = cpy; 
	return;   
}

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
std::string   Form::get_form_name() const
{
	return (this->_name) ;
}
int         Form::get_form_executing_grade() const
{
	return (this->_executing_grade) ;
}
int         Form::get_form_signing_grade() const
{
	return (this->_signing_grade) ;
}
int			Form::get_form_signed_value() const
{
	return (this->_signed_value) ;
}
//----------------------------------------------------------------------*
void	Form::beSigned(const Bureaucrat &person)
{
	if (this->get_form_signing_grade() >= person.get_bureaucrat_grade())
		this->_signed_value = 1;
	else
		throw Form::GradeTooLowException();
	return;
}

//*****************************************************************************
// 		                     O P E R A T O R S                   			//
//*****************************************************************************
std::ostream &operator <<(std::ostream &stream, const Form &stream_output)
{
	stream << stream_output.get_form_name();
	if (stream_output.get_form_signed_value() == 1)
		std::cout << " ----> signed" << std::endl;
	else
		std::cout << " ----> not signed" << std::endl;
	return (stream);
}
Form    &Form::operator = (Form const &eq)
{
	if (this != &eq)
	{
		// this->_name    = eq.get_form_name();
		// this->_executing_grade      = eq.get_form_executing_rade();
		// this->_signing_grade        = eq.get_form_signing_rade();
		this->_signed_value			= eq.get_form_signed_value();
	}
	return *this;
}

//*****************************************************************************
//		                    E X C E P T I O N S                   			//
//*****************************************************************************
const char *Form::GradeTooHighException::what() const throw () 
{
	return ("The grade is too high");
}
const char *Form::GradeTooLowException::what() const throw () 
{
	return ("The grade is too low");
}
