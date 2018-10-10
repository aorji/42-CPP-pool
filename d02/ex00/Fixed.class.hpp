/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:43:06 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 17:43:08 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <string>

class Fixed {

public:

	Fixed( void );							// default constructor
	Fixed( Fixed const & src);				//copy constructor
	~Fixed( void );							//destructor

	Fixed & operator=( Fixed const & rhs);	//assignation operator overload

	int getRawBits( void ) const;			//returns the raw value of the fixed point value
	void setRawBits( int const raw );		//sets the raw value of the fixed point value		

private:
	int _fixedPointValue;
	static const int _fractionalBitsNb;

};

std::ostream & operator<<( std::ostream & op, Fixed const & nb);

#endif