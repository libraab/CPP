/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:21:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 10:14:00 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, const int grade1, const int grade2);
		virtual ~Form(void);
		Form(const Form &cpy);
		
        Form	&operator = (Form const &eq);
		void	beSigned(const Bureaucrat &person);

		std::string		get_form_name() const;
		int				get_form_signed_value() const;
		int				get_form_executing_grade() const;
		int				get_form_signing_grade() const;
		
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
		const std::string	_name;
		bool				_signed_value;
		const int 			_signing_grade;
		const int 			_executing_grade;
};

std::ostream &operator << (std::ostream lhs, const Form rhs);