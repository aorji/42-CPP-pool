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

	Fixed( void );							// default constructor
	Fixed( Fixed const & src);				//copy constructor
	Fixed( const int nb);
	Fixed( const float nb);
	~Fixed( void );							//destructor

	Fixed & operator=( Fixed const & rhs);	//assignation operator overload

	int getRawBits( void ) const;			//returns the raw value of the fixed point value
	void setRawBits( int const raw );		//sets the raw value of the fixed point value		
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _fixedPointValue;
	static const int _fractionalBitsNb;

};

std::ostream & operator<<( std::ostream & ost, Fixed const & nb);

#endif