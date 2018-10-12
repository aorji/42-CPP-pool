/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:38:49 by aorji             #+#    #+#             */
/*   Updated: 2018/10/11 14:38:50 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

template<typename T = int>

class Array {

public:
	Array<T>( void ): _array(NULL), _size(0) {}

	Array<T>( unsigned int n ): _size(n) { _size == 0 ? _array =  NULL : _array = new T[_size]; }

	Array<T> ( Array<T> const & rhs ) { *this = rhs; }

	~Array<T>() { 
		if (_size)
			delete [] _array;
	}

	Array<T> & operator=( Array<T> const & rhs) {
		if (this != &rhs) {
			_size = rhs.getSize();
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = rhs[i]; 
		}
		return *this;
	}

	// T * getArray( void ) const { return _array; }

	unsigned int getSize( void ) const { return _size; }

	T & operator[](unsigned int index) {
		if (index >= _size)
			throw std::exception();
		return _array[index];
	}
	T operator[](unsigned int index) const {
		if (index >= _size)
			throw std::exception();
		return _array[index];
	}

private:
	T *_array;
	unsigned int _size;

};
