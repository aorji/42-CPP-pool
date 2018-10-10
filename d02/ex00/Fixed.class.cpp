/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:43:01 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 17:43:03 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fractionalBitsNb = 8;

Fixed::Fixed( void ) {
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int
Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
 	return this->_fixedPointValue;
}

void
Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
	return;
}	

Fixed
&Fixed::operator=( Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<( std::ostream & op, Fixed const & nb){
	op << nb.getRawBits();
	return op;
}