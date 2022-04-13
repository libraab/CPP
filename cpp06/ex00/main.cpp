/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:52:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/13 09:54:23 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

//******************************************************************************
    bool	str_is_nan(std::string const &str)
    {
        for(int i = 0; str[i]; i++)
        {
            if(!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != '+' && str[i] != 'f')
                return (true);
        }
        return (false);
    }
//******************************************************************************
    bool	str_is_double(std::string const &str)
    {
        for(int i = 0; str[i]; i++)
        {
            if(str[i] == '.' || str[i] == 'f')
                return (true);
        }
        return (false);
    }
//******************************************************************************
    int	str_is_inf(std::string const &str)
    {
        if(str == "inf" || str == "+inf" || str == "inff" || str == "+inff")
            return (1);
        if(str == "-inf" || str == "-inff")
            return (2);
        return (0);
    }
//******************************************************************************
    void print_char(char c)
    {
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast <int> (c) << std::endl;
        std::cout << "float: " << static_cast <float> (c) << ".0f"  << std::endl;
        std::cout << "double: " << static_cast <double> (c) << ".0" << std::endl;
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
void    print_int_float_double(std::string const &str, long double x)
{
    if (str_is_double(str))
    {
        if (x > std::numeric_limits <double> ::max())
        {
            std::cout << "int: inf" << std::endl;
            std::cout << "float: inff" << std::endl;
            std::cout << "double: inf" << std::endl; 
        }
        else if (x < std::numeric_limits <double> ::min())
        {
            std::cout << "int: -inf" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl; 
        }
        else
        {
		if(x > std::numeric_limits <int> ::max())
			std::cout << "int: inf" << std::endl;
		else if (x < std::numeric_limits <int> ::min())
			std::cout << "int: -inf" << std::endl;
		else
			std::cout << "int: " << static_cast <int> (x) << std::endl;
            if (static_cast <float> (x) == static_cast <int> (x))
            {
                std::cout << "float: " << static_cast <float> (x) << ".0f" << std::endl;
                std::cout << "double: " << static_cast <double> (x) << ".0" << std::endl;
                
            }
            else
            {
                std::cout << "float: " << static_cast <float> (x) << "f" << std::endl;
                std::cout << "double: " << static_cast <double> (x) << std::endl;    
            }
        }
    }
    else
    {
        if (x > std::numeric_limits <int> ::max())
        {
            std::cout << "int: inf" << std::endl;
            if (x > std::numeric_limits <float> ::max())
		std::cout << "float: +inf" << std::endl;
	    else
		std::cout << "float: " << static_cast <float> (x) << std::endl;
	    if (x > std::numeric_limits <double> ::max())
            	std::cout << "double: +inf" << std::endl;
	    else
		std::cout << "double: " << static_cast <double> (x) << std::endl;
        }
        else if (x < std::numeric_limits <int> ::min())
        {
            std::cout << "int: -inf" << std::endl;
	    if (x < std::numeric_limits <float> ::min())
            	std::cout << "float: -inf" << std::endl;
	    else
		std::cout << "float: " << static_cast <float> (x) << std::endl;
	    if (x < std::numeric_limits <double> ::min())
            	std::cout << "double: -inf" << std::endl;
	    else
		std::cout <<"double: " << static_cast <double> (x) << std::endl;
        }
        else
        {
            std::cout << "int: " << static_cast <int> (x) << std::endl;
            if (static_cast <float> (x) == static_cast <int> (x))
            {
                std::cout << "float: " << static_cast <float> (x) << ".0f" << std::endl;
                std::cout << "double: " << static_cast <double> (x) << ".0" << std::endl;
                
            }
            else
            {
                std::cout << "float: " << static_cast <float> (x) << "f" << std::endl;
                std::cout << "double: " << static_cast <double> (x) << std::endl;    
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
		if (((std::string)av[1]).length() == 1 && !std::isdigit(av[1][0]))
            print_char(av[1][0]);
        else if (str_is_inf(av[1]))
        {
            std::cout << "char: impossible" << std::endl;
            if (str_is_inf(av[1]) == 1)
            {
                std::cout << "int: inf" << std::endl;
                std::cout << "float: inff" << std::endl;
                std::cout << "double: inf" << std::endl;
            }
            else
            {
                std::cout << "int: -inf" << std::endl;
                std::cout << "float: -inff" << std::endl;
                std::cout << "double: -inf" << std::endl;
            }
            return (0);
        }
        else if (((std::string)av[1]).length() > 1 && str_is_nan(av[1]))
            print_nan();
        else
        {
		x = std::atof(av[1]);
            if (static_cast <int> (x) > 126 || static_cast <int> (x) < 32)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast <char> (x) << "'" << std::endl;
            print_int_float_double(av[1], x);
        }
	}
	return (0);
}
//******************************************************************************
