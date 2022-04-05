/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:30:05 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/05 11:13:10 by abouhlel         ###   ########.fr       */
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
};