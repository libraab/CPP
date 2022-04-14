#pragma once

#include <iostream>

template <typename T>
class Array
{
	public:
		Array() : _size(0), _array(NULL) {}
		Array(Array const &cpy) {*this = cpy;}
		Array(unsigned int x) : _size(x), _array(new T[x]) {}
		~Array() {delete [] _array;}
		
		int	get_size() const {return (this->_size);}
		T	*get_array() const {return (this->_array);}

		Array &operator = (Array const &op)
		{
			if (_size > 0)
				delete [] _array;
			this->_size = op.get_size();
			_array = new T[_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = op._array[i];
			return (*this);
		}
		
		T	&operator [] (int x)
		{
			if (x < 0 || (static_cast <unsigned int> (x) ) > this->_size - 1)
				throw Array::Off_limit();
			return (this->_array[x]);
		}

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

