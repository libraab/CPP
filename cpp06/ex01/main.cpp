/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:40:56 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/07 14:48:21 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

struct Data 
{
    std::string str;
    int x;
}
//******************************************************************************
uintptr_t serialize(Data* ptr)
{
    uinptr_t x;
    x = reinterpret_cast<uintptr_t>(ptr);
    return (x);
}
//******************************************************************************
Data* deserialize(uintptr_t raw)
{
    Data *y;
    y = reinterpret_cast<Data*>(raw);
    return (y);
}
//******************************************************************************
int main(void)
{
    
    return (0);
}