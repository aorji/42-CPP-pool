/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:25:28 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 12:25:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// round( 2.3)
#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

public:

	//constructors
	Fixed( void );							//default constructor
	Fixed( Fixed const & src);				//copy constructor
	Fixed( const int nb);
	Fixed( const float nb);
	~Fixed( void );							//destructor

	//destructor
	Fixed & operator=( Fixed const & rhs);	//assignation operator overload
	
	// comparison operators
	bool operator>( Fixed const & rhs) const;
	bool operator<( Fixed const & rhs) const;
	bool operator>=( Fixed const & rhs) const;
	bool operator<=( Fixed const & rhs) const;
	bool operator==( Fixed const & rhs) const;
	bool operator!=( Fixed const & rhs) const;

	//  arithmetic operators
	Fixed operator+( Fixed const & rhs) const;
	Fixed operator-( Fixed const & rhs) const;
	Fixed operator*( Fixed const & rhs) const;
	Fixed operator/( Fixed const & rhs) const;

	//increment operators					
	Fixed & operator++( void );				//pre
	Fixed operator++( int );				//post
	
	//decrement operators
	Fixed & operator--( void );				//pre
	Fixed operator--( int );				//post

	//accessors
	int getRawBits( void ) const;			//returns the raw value of the fixed point value
	void setRawBits( int const raw );		//sets the raw value of the fixed point value		
	
	//cast
	float toFloat( void ) const;			//cast to float
	int toInt( void ) const;				//cast to int

	// min
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);

	// max
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);

private:
	int _fixedPointValue;
	static const int _fractionalBitsNb;

};

std::ostream & operator<<( std::ostream & ost, Fixed const & nb);

#endif