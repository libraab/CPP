/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:25:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 10:28:43 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stack>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:

		MutantStack<T>(void) {}
		MutantStack<T>(MutantStack <T> const &src)
		{
			*this = src;
		}
		virtual ~MutantStack<T>(void) {}

		MutantStack<T>	&operator=(MutantStack<T> const &rhs)
		{
			if (this != &rhs)
			{
				std::stack<T>::operator=(rhs);
			}

			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() { return std::begin(this->c); }
		iterator	end() { return std::end(this->c); }
};