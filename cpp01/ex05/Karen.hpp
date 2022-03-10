/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:17:36 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/10 14:46:07 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>

class Karen
{
    public:
        Karen(void);
        ~Karen(void);
        void complain(std::string level);
        
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
};
