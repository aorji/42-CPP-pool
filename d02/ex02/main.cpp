/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:30:41 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 12:30:42 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << "Additional tests:" << std::endl;
	a = 2;
	Fixed c(1.1f);
	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "c - a = " << c - a << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " << a / c << std::endl;
	
	(a > c) ? std::cout << "a > c " << std::endl : std::cout << "a < c " << std::endl;
	(a >= c) ? std::cout << "a >= c " << std::endl : std::cout << "a =< c " << std::endl;
	(a < c) ? std::cout << "a < c " << std::endl : std::cout << "a > c " << std::endl;
	(a <= c) ? std::cout << "a <= c " << std::endl : std::cout << "a >= c " << std::endl;
	(a == c) ? std::cout << "a == c " << std::endl : std::cout << "a != c " << std::endl;
	(a != c) ? std::cout << "a != c " << std::endl : std::cout << "a != c " << std::endl;
	
	return 0;
}