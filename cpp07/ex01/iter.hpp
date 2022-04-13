#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cstddef>

template <typename T>
void	iter(T *str, size_t x, void (*f)(T))
{
	for (size_t i = 0; i < x; i++)
		f(str[i]);
}
