/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:10:28 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:10:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {
}

Sorcerer::Sorcerer ( std::string name, std::string title ): _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born !" << std::endl; 
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl; 	
}

Sorcerer::Sorcerer( Sorcerer const & src) {
	*this = src;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

void
Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

std::string
Sorcerer::getName( void ) const { return this->_name; }

std::string
Sorcerer::getTitle( void ) const { return this->_title; }

std::ostream & operator<<( std::ostream & ost, Sorcerer const & obj) {
	ost << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies !" << std::endl; 
	return ost;
}

Sorcerer
&Sorcerer::operator=( Sorcerer const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}