/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:58:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 16:05:05 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <string>
#include <fstream>

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		virtual	~ShrubberyCreationForm(void);

		ShrubberyCreationForm	    &operator = (ShrubberyCreationForm const &eq);
		void 						execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};