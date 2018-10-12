/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:13:59 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 19:13:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTAN_TATACK_HPP
# define MUTAN_TATACK_HPP

#include <string>
#include <iostream>
#include <stack>

template<typename T>

class MutantStack: public std::stack<T> {
public:
	MutantStack<T>( void ) {}
	MutantStack<T>( MutantStack<T> const & src ): std::stack<T>(src) {}
	~MutantStack<T>() {}

	////
	typedef typename std::stack<T>::container_type::iterator iterator;
    using std::stack<T>::operator=;

    iterator	begin() { return std::stack<T>::c.begin(); }
    iterator	end() { return std::stack<T>::c.end(); }
    ////
};

#endif