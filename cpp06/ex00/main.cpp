/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:52:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/07 14:28:24 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

//******************************************************************************
    bool	str_is_nan(std::string const &str)
    {
        for(int i = 0; str[i + 1]; i++)
        {
            if(!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != '+')
                return (true);
        }
        return (false);
    }
//******************************************************************************
    bool	str_is_double(std::string const &str)
    {
        for(int i = 0; str[i + 1]; i++)
        {
            if(str[i] == '.')
                return (true);
        }
        return (false);
    }
//******************************************************************************
    void print_char(unsigned char c)
    {
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast < int > (c) << std::endl;
        std::cout << "float: " << static_cast < float > (c) << "f"  << std::endl;
        std::cout << "double: " << static_cast < double > (c) << std::endl;
    }
//******************************************************************************
    void print_nan(void)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
//*******************************************************************************
void    print_int_float_double(std::string const &str, double x)
{
    if (str_is_double(str))
    {
        if (x > std::numeric_limits <double> ::max())
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: +inf" << std::endl;
            std::cout << "double: +inf" << std::endl; 
        }
        else if (x < std::numeric_limits <double> ::min())
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inf" << std::endl;
            std::cout << "double: -inf" << std::endl; 
        }
        else
        {
            std::cout << "int: " << static_cast < int > (x) << std::endl;
            if (static_cast <float> (x) == static_cast <int> (x))
            {
                std::cout << "float: " << static_cast < float > (x) << ".0f" << std::endl;
                std::cout << "double: " << static_cast < double > (x) << ".0" << std::endl;
                
            }
            else
            {
                std::cout << "float: " << static_cast < float > (x) << "f" << std::endl;
                std::cout << "double: " << static_cast < double > (x) << std::endl;    
            }
        }
    }
    else
    {
        if (x > std::numeric_limits <int> ::max())
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: +inf" << std::endl;
            std::cout << "double: +inf" << std::endl; 
        }
        else if (x < std::numeric_limits <int> ::min())
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inf" << std::endl;
            std::cout << "double: -inf" << std::endl; 
        }
        else
        {
            std::cout << "int: " << static_cast < int > (x) << std::endl;
            if (static_cast <float> (x) == static_cast <int> (x))
            {
                std::cout << "float: " << static_cast < float > (x) << ".0f" << std::endl;
                std::cout << "double: " << static_cast < double > (x) << ".0" << std::endl;
                
            }
            else
            {
                std::cout << "float: " << static_cast < float > (x) << "f" << std::endl;
                std::cout << "double: " << static_cast < double > (x) << std::endl;    
            }
        }     
    }
    
}
//*******************************************************************************
int	main(int ac, char **av)
{
    long double x = 0.0;
    if (ac != 2)
	    std::cout << "ERROR : 🚫 Wrong number of arguments" << std::endl;
	else
	{
		if (((std::string)av[1]).length() == 1 && !std::isdigit((unsigned char)(av[1][0])))
            print_char(static_cast < unsigned char > (av[1][0]));
        else if (((std::string)av[1]).length() > 1 && str_is_nan(av[1]))
            print_nan();
        else
        {
            x = std::stold(av[1]);
            if (static_cast < int > (x) > 126 || static_cast < int > (x) < 32)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast < char > (x) << "'" << std::endl;
            print_int_float_double(av[1], x);
        }
	}
	return (0);
}
//******************************************************************************