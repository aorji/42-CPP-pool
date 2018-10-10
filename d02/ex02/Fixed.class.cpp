/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:25:22 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 12:25:24 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fractionalBitsNb = 8;

//constructors
Fixed::Fixed( void ) {
	_fixedPointValue = 0;
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int nb ) {
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = nb << _fractionalBitsNb;
	return ;
}

Fixed::Fixed( const float nb ) {
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(nb * (1 << _fractionalBitsNb));
	return ;
}

//destructor
Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

//assignation operator overload
Fixed
&Fixed::operator=( Fixed const & rhs) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

//comparison operators
bool
Fixed::operator>( Fixed const & rhs) const {
	return (this->toFloat() > rhs.toFloat());
}
bool
Fixed::operator<( Fixed const & rhs) const {
	return (this->toFloat() < rhs.toFloat());
}
bool
Fixed::operator>=( Fixed const & rhs) const {
	return (this->toFloat() >= rhs.toFloat());
}
bool
Fixed::operator<=( Fixed const & rhs) const {
	return (this->toFloat() <= rhs.toFloat());
}
bool
Fixed::operator==( Fixed const & rhs) const {
	return (this->toFloat() == rhs.toFloat());
}
bool
Fixed::operator!=( Fixed const & rhs) const {
	return (this->toFloat() != rhs.toFloat());
}

//arithmetic operators
Fixed 
Fixed::operator+( Fixed const & rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat())); 
}

Fixed
Fixed::operator-( Fixed const & rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed
Fixed::operator*( Fixed const & rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed
Fixed::operator/( Fixed const & rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


//pre-increment operator
Fixed &
Fixed::operator++( void ) {
	_fixedPointValue += 1;
	return *this;
}

//post-increment operator
Fixed
Fixed::operator++( int ) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

//pre-decrement operator
Fixed &
Fixed::operator--( void ) {
	_fixedPointValue -= 1;
	return *this;
}

//post-decrement operator
Fixed
Fixed::operator--( int ) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

//accessors
int
Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
 	return this->_fixedPointValue;
}

void
Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
	return;
}	

//cast
float
Fixed::toFloat( void ) const {
	return ((float)(this->_fixedPointValue) / (1 << _fractionalBitsNb));
}

int
Fixed::toInt( void ) const {
	return (this->_fixedPointValue >> _fractionalBitsNb);
}

//min 
Fixed &
Fixed::min(Fixed & a, Fixed & b) {
	return (a < b ? a : b);
}

Fixed const &
Fixed::min(Fixed const & a, Fixed const & b) {
	return (a < b ? a : b);
}

//max
Fixed &
Fixed::max(Fixed & a, Fixed & b) {
	return (a > b ? a : b);
}

Fixed const &
Fixed::max(Fixed const & a, Fixed const & b) {
	return (a > b ? a : b);
}

//output operator
std::ostream & operator<<( std::ostream & ost, Fixed const & nb){
	ost << nb.toFloat();
	return ost;
}
