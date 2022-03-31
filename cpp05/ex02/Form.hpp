/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:21:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 14:31:25 by abouhlel         ###   ########.fr       */
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
		Form(const Form &cpy);
		virtual ~Form(void);
		
        Form	&operator = (Form const &eq);
		
		void			beSigned(const Bureaucrat &person);
		virtual void 	execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator << (std::ostream stream, const Form stream_output);