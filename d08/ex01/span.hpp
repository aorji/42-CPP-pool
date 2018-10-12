/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:56:20 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 14:56:22 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>

class Span {
public:
	Span( unsigned int N);
	Span( Span const & src );
	~Span( void );
	
	Span & operator=( Span const &rhs );

	void addNumber( unsigned int n );
	unsigned int shortestSpan( void ) const;
	unsigned int longestSpan( void ) const;
	std::vector<int> getContainer( void ) const;
	unsigned int getN( void ) const;

	class CountException: public std::exception  {
	public:
		CountException( void );
		CountException( CountException const & src );
		~CountException( void ) throw();
		CountException & operator=( CountException const & rhs);
		virtual const char* what() const throw();
	};
	class EmptyException: public std::exception  {
	public:
		EmptyException( void );
		EmptyException( EmptyException const & src );
		~EmptyException( void ) throw();
		EmptyException & operator=( EmptyException const & rhs);
		virtual const char* what() const throw();
	};

private:
	Span( void );
	std::vector<int> _container;
	unsigned int _N;
	unsigned int _addedElemCount;
};

#endif