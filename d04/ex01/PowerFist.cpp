/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:05 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:06 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist ( void ) : AWeapon("Power Fist", 8, 50) {
	std::cout << "Default constructor called" << std::endl;
}

PowerFist::PowerFist( PowerFist const & src ) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

PowerFist::~PowerFist() {
}

void
PowerFist::attack( void ) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist
&PowerFist::operator=( PowerFist const & rhs ) {
	if (this != &rhs) {
		setName(rhs.getName());
		setDamage(rhs.getDamage());
		setAPCost(rhs.getAPCost());
	}
	return *this;
}

