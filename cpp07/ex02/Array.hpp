#pragma once

#include <iostream>

template <typename T>
class Array
{
	public:
		Array() : _size(0), _array(NULL) {}
		Array(unsigned int x) : _size(x), _array(new T[x]) {}
		Array(Array const &cpy) {*this = cpy;}
		~Array() {}
		
		Array &operator = (Array const &op) {
			this->_array = op._array;
			this->_size = op._size;
			return (*this);
		}
		
		T	&operator [] (int x)
		{
			if (x < 0 || (static_cast <unsigned int> (x) ) > this->_size - 1)
				throw Array::Off_limit();
			return (this->_array[x]);
		}

		int	size() const {return (this->_size);}
		T	get_array() const {return (this->_array);}

		class	Off_limit : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("⛔️ Error: Off limits");
				}
		};

	private:
		unsigned int _size;
		T *_array;
};

