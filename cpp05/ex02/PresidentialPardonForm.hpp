/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 10:16:09 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <string>

class	PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm &cpy);
		virtual	~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator = (PresidentialPardonForm const &eq);

		std::string const	&getTarget(void) const;

	private:

		virtual void	beExecuted(void) const;

		PresidentialPardonForm(void);

		std::string	_target;
};
