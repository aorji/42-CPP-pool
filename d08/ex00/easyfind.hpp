/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:36:42 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 12:36:43 by aorji            ###   ########.fr       */
/*                                                                            */
// /* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
# include <list>
# include <vector>
# include <map>

class NoSuchElementException: public std::exception  {
public:
	NoSuchElementException( void ) {}
	NoSuchElementException( NoSuchElementException const & src ) { *this = src; }
	~NoSuchElementException( void ) throw() {}
	NoSuchElementException & operator=( NoSuchElementException const & rhs) { (void)rhs; return *this; }
	virtual const char* what() const throw() { return ("No such element in the container!"); }
};

template<typename T>

void easyfind(T &container, int to_find) {

	typename T::iterator elem; 
	elem = std::find(container.begin(), container.end(), to_find);
	if (elem != container.end())
        std::cout << "Element " << to_find <<" found at position : " << elem - container.begin() + 1 << std::endl;
    else
    	throw NoSuchElementException();
}

#endif