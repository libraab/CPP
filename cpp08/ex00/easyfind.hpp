/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:13:09 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 15:13:30 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template <typename T>

void   easyFind(T &container, int const x)
{
    typename T::iterator    tmp = (std::find(container.begin(), container.end(), x));

    if (tmp != container.end())
        std::cout << "Occurence found ✅" << std::endl;
    else
        std::cout << "No occurence found ❌" << std::endl;
}