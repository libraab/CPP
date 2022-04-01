/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:39 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 16:55:06 by abouhlel         ###   ########.fr       */
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
	Bureaucrat::Bureaucrat(Bureaucrat const &cpy) 
	{
		*this = cpy; 
		return;   
	}
	Bureaucrat::~Bureaucrat(void)
	{
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
	
	//*************************************************************************
	void		Bureaucrat::sign_form(const Form &myform)
	{
		std::cout << this->get_bureaucrat_name();
		
		if (this->get_bureaucrat_grade() <= myform.get_form_signing_grade())
		{
			std::cout << " signed the form 📜 🖊  " << myform.get_form_name() << "." << std::endl;
			std::cout << "This form require a signature grade of " << myform.get_form_signing_grade() << " at the lowest." << std::endl;
		}
		else
			std::cout << " 🚫 is unqualified to sign the form " << myform.get_form_name() << std::endl;

		return;
	}
	void		Bureaucrat::executeForm(const Form &myform)
	{
		std::cout << this->get_bureaucrat_name();
		
		if (this->get_bureaucrat_grade() <= myform.get_form_executing_grade())
		{
			std::cout << " executed the form ✅  " << myform.get_form_name() << "." << std::endl;
			std::cout << "This form require an executing grade of " << myform.get_form_executing_grade() << " at the lowest." << std::endl;
			myform.execute(*this);
		}
		else
			std::cout << " 🚫 is unqualified to execute the form " << myform.get_form_name();
			
		return;
	}
//*****************************************************************************
// 		                     O P E R A T O R S                   			//
//*****************************************************************************
	std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output)
	{
		std::cout << std::endl;
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
