/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:59:49 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/14 09:26:37 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//-------------------------------------
template <typename T>
void	swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}
//--------------------------------------
template <typename T>
T const	&max(T const &x, T const &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}
//--------------------------------------
template <typename T>
T const &min(T const &x, T const &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
//--------------------------------------
