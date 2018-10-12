/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:56:08 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 14:56:09 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) {}
Span::Span( unsigned int N ) : _N(N), _addedElemCount(0) {}
Span::Span( Span const & src ) { *this = src; }
Span::~Span( void ) {}

Span &
Span::operator=( Span const &rhs ) {
	if (this != &rhs) {
		_container = rhs.getContainer();
		_N = rhs.getN();
	}
	return *this;
}

void
Span::addNumber( unsigned int n ) {
	if (_addedElemCount + 1 > _N)
		throw Span::CountException();
	else {
		_addedElemCount++;
		_container.push_back(n);
	}
}
unsigned int
Span::shortestSpan( void ) const {
	int res = longestSpan();
	if (!_container.size())
		throw Span::EmptyException();

	std::vector<int>cpy = _container;
	std::sort(cpy.begin(), cpy.end());

	std::vector<int>::iterator elem = cpy.begin();
	while (elem + 1 != cpy.end()) {
		if ((*(elem + 1)- *elem)< res)
			res = *(elem + 1)- *elem;
		elem++;
	}
	return res;
}
unsigned int
Span::longestSpan( void ) const {
	if (!_container.size())
		throw Span::EmptyException();
	std::vector<int> 	cpy = _container;
	std::sort(cpy.begin(), cpy.end());
	return (*(cpy.end() - 1) - *(cpy.begin()));
}

std::vector<int>
Span::getContainer( void ) const { return _container; }
unsigned int
Span::getN( void ) const { return _N; }

Span::
CountException::CountException ( void ) {}

Span::
CountException::CountException ( Span::CountException const & src ) {
	*this = src;
}

Span::
CountException::~CountException ( void ) throw() {}

Span::CountException & 
Span::CountException::operator=( Span::CountException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
Span::CountException::what() const throw() {
    return ("There is no space left in the container.");
}

Span::
EmptyException::EmptyException ( void ) {}

Span::
EmptyException::EmptyException ( Span::EmptyException const & src ) {
	*this = src;
}

Span::
EmptyException::~EmptyException ( void ) throw() {}

Span::EmptyException & 
Span::EmptyException::operator=( Span::EmptyException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
Span::EmptyException::what() const throw() {
    return ("There is no item in the container.");
}
