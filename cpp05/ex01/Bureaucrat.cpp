/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:39 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/29 14:49:48 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name)
{
	if (grade < 1)
	{
		std::cout << "⛔️ WRONG GRADE" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150)
	{
		std::cout << "⛔️ WRONG GRADE" << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
}
Bureaucrat::~Bureaucrat(void)
{
	return;   
}
Bureaucrat::Bureaucrat(Bureaucrat const &cpy) 
{
	*this = cpy; 
	return;   
}

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
std::string   Bureaucrat::get_bureaucrat_name() const
{
	return (this->_name) ;
}
int         Bureaucrat::get_bureaucrat_grade() const
{
	return (this->_grade) ;
}
void		Bureaucrat::upgrade()
{
	this->_grade--;
	if (this->_grade < 1)
	{
		std::cout << "❌ CANNOT PROMOTE 🎖" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
}
void		Bureaucrat::downgrade()
{
	this->_grade++;
	if (this->_grade > 150)
	{
		std::cout <<  "❌ CANNOT DEMOTE 👞" << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}
void		Bureaucrat::signForm(const Form &myform)
{
	std::cout << this->get_bureaucrat_name();
	if (myform.get_form_signing_grade >= this->get_bureaucrat_grade())
	{
		std::cout << " signed the form 📜 🖊 ";
		std::cout << myform.get_form_name();
	}
	else
	{
		std::cout << " 🚫 is unqualified to sign the form ";
		std::cout << myform.get_form_name();
	}
}

//*****************************************************************************
// 		                     O P E R A T O R S                   			//
//*****************************************************************************
std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output)
{
	stream << stream_output.get_bureaucrat_name() << ", bureaucrat grade " << stream_output.get_bureaucrat_grade();
	return (stream);
}
Bureaucrat    &Bureaucrat::operator = (Bureaucrat const &eq)
{
	if (this != &eq)
	{
		(std::string)this->_name    = eq.get_bureaucrat_name();
		this->_grade             	= eq.get_bureaucrat_grade();
	}
	return *this;
}

//*****************************************************************************
//		                    E X C E P T I O N S                   			//
//*****************************************************************************
const char *Bureaucrat::GradeTooHighException::what() const throw () 
{
	return ("The grade is too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw () 
{
	return ("The grade is too low");
}
