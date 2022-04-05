/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:17:54 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/05 08:20:23 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class form;

class Intern
{
    public:
        Intern(void);
        Intern(const std::string form_name, const std::string target_name);
        Intern(const Intern &cpy);
        virtual ~Intern(void);

        Intern	&operator = (Intern const &op);
        
        Form    *makeForm(const std::string form_name, const std::string target_name);
        Form	*Shrubbery_form(std::string const &target_name) const;
		Form	*Robotomy_form(std::string const &target_name) const;
		Form	*Presidential_form(std::string const &target_name) const;
        
        class	Invalid_form : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
        
        private:
            std::string form_list[];
};