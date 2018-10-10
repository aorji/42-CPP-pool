/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:21:41 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:21:42 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon ( void ) {
	std::cout << "Default constructor called" << std::endl;
}

AWeapon::AWeapon( AWeapon const & src ) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ): _name(name), _APCost(apcost), _damage(damage) {
	std::cout << "Constructor called" << std::endl;

}

AWeapon::~AWeapon() {
}

std::string const
AWeapon::getName( void ) const { return _name; }
int
AWeapon::getAPCost( void ) const { return _APCost; }
int
AWeapon::getDamage( void ) const { return _damage; }

void
AWeapon::setName(std::string const name) { _name = name; }
void
AWeapon::setAPCost( int n ) { _APCost = n; }
void
AWeapon::setDamage( int n ) { _damage = n; }

AWeapon
&AWeapon::operator=( AWeapon const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_APCost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}