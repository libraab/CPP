/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 14:21:27 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "String's address is --> " << &string << std::endl;
    std::cout << "String's address (using pointer) is --> " << &stringPTR << std::endl;
    std::cout << "String's address (using reference) is --> " << &stringREF << std::endl;
    std::cout << std::endl;
    
    std::cout << "String's Value is --> " << string << std::endl;
    std::cout << "String's Value (using pointer) is --> " << *stringPTR << std::endl;
    std::cout << "String's Value (using reference) is --> " << stringREF << std::endl;
    
    return (0);
}
