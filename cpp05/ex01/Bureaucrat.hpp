/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/29 15:19:54 by abouhlel         ###   ########.fr       */
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
		void                upgrade();
		void                downgrade();
		void				signForm(const Form &myform);
		
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
		int                     _grade; // 1 is the highest and 150 is le the lowest
};

std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output);