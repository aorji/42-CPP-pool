/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:21:52 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:21:53 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle ( void ) : AWeapon("Plasma Rifle", 5, 21) {
	std::cout << "Default constructor called" << std::endl;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
}

void
PlasmaRifle::attack( void ) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle
&PlasmaRifle::operator=( PlasmaRifle const & rhs ) {
	if (this != &rhs) {
		setName(rhs.getName());
		setDamage(rhs.getDamage());
		setAPCost(rhs.getAPCost());
	}
	return *this;
}