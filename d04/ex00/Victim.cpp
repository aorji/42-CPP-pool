/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:10:43 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:10:44 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void ) {
}

Victim::Victim ( std::string name ): _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl; 
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;	
}

Victim::Victim( Victim const & src) {
	*this = src;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl; 
}

void
Victim::getPolymorphed( void ) const {
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string
Victim::getName( void ) const { return this->_name; }

void
Victim::setName( std::string name ) { this->_name = name; return; }

std::ostream & operator<<( std::ostream & ost, Victim const & obj) {
	ost << "I am " << obj.getName() << ", and I like otters !" << std::endl; 
	return ost;
}

Victim
&Victim::operator=( Victim const & rhs) {
	if (this != &rhs)
		this->_name = rhs.getName();
	return *this;
}