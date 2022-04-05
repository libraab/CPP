/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 15:27:17 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int const grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat(void);
		
		Bureaucrat			&operator = (Bureaucrat const &eq);
		
		std::string			get_bureaucrat_name() const;
		int          		get_bureaucrat_grade()const;
		
		void				sign_form(const Form &myform);
		void				executeForm(const Form &myform);
		
		class GradeTooHighException: public std::exception
		{
			public: 
				const char * what() const throw ();
		};

		class GradeTooLowException: public std::exception
		{
			public: 
				const char * what() const throw ();
		};
		
	private:
		std::string const       _name;
		int                     _grade;
};

std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output);