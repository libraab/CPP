/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:28:04 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/10 14:11:50 by abouhlel         ###   ########.fr       */
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
            else if (std::string(av[2]).length() == 1 && (std::string(av[3]).find(std::string(av[2]))) != std::string::npos)
            {
                std::cout << "ERROR ⛔️  : Endless change " << std::endl;
                return (1);
            }
            else
            {
                std::string     line;
                std::string     text;
                std::string     newfile;
                
                newfile = (std::string(av[1])) + ".replace";
                while(getline(ifs, line))
                    text += line + "\n";
                int  x = 0;
                while(1 && x != std::string::npos)
                {
                    x = text.find(std::string(av[2]));
                    if (x != std::string::npos)
                    {
                        std::cout << "here" << std::endl;
                        text.erase(x, std::string(av[2]).length());
                        text.insert(x, std::string(av[3]));
                    }
                    else
                    {
                        std::cout << "Done ✅  : All occurences (if there were any) have been replaced. " << std::endl;
                        break;
                    }
                }
                std::ofstream ofs(newfile, std::ofstream::trunc);
                ofs << text;
                ofs.close();
                ifs.close();
                return (0);
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