/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:59:46 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 16:06:01 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
    public:
        Brain(void);
        ~Brain(void);
        Brain(const Brain &cpy);

        Brain           &operator = (Brain const& eq);
        std::string     *get_ideas(void) const;
        
    protected:
        std::string  _ideas[];
};