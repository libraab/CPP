/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:58:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 14:30:21 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <string>

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const name);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		virtual	~ShrubberyCreationForm(void);

		ShrubberyCreationForm	    &operator = (ShrubberyCreationForm const &eq);

		void execute(Bureaucrat const &executor) const;

	private:

		std::string	_target;
};