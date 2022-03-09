/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:28:04 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 18:08:53 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream   ifs(av[1]);
        if(ifs.is_open())
        {
            if (std::string(av[2]).empty() || std::string(av[3]).empty())
            {
                std::cout << "ERROR ⛔️  : Wrong strings " << std::endl;
                return (1);
            }
            else
            {
                std::string     line;
                std::string     text;
                while(getline(ifs, line))
                    text += line + "\n";
                int  x = 0;
                while(1)
                {
                    if ((x = text.find(std::string(av[2])) >= 0)
                    {
                        text.erase(x, std::string(av[2]).length());
                        text.insert(x, std::string(av[3]));
                    }
                }
                ifs.close();
            }
        }
        else
        {
            std::cout << "ERROR ⛔️  : Wrong File " << std::endl;
            return (1);
        }
    }
    else
    {
        std::cout << "ERROR ⛔️  : Wrong number of arguments " << std::endl;
        return (1);
    }
    return (0);
}