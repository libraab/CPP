/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:01 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 15:22:08 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <string>

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		virtual	~RobotomyRequestForm(void);

		RobotomyRequestForm 	&operator = (RobotomyRequestForm const &eq);
		void 					execute(Bureaucrat const &executor) const;

	private:
		std::string	_target;
};
