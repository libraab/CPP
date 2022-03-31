/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:01 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 10:16:17 by abouhlel         ###   ########.fr       */
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

		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm &cpy);
		virtual	~RobotomyRequestForm(void);

		RobotomyRequestForm     &operator = (RobotomyRequestForm const &eq);

		std::string const	&getTarget(void) const;

	private:

		virtual void	beExecuted(void) const;

		RobotomyRequestForm(void);

		std::string	_target;
};