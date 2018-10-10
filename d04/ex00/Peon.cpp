/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:09:53 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:09:54 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void ) {
}

Peon::Peon ( std::string name ) : Victim(name) {
	setName(name);
	std::cout << "Zog zog." << std::endl; 
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;	
}

Peon::Peon( Peon const & src) {
	*this = src;
	std::cout << "Zog zog." << std::endl; 
}

void
Peon::getPolymorphed( void ) const {
	std::cout << getName() << " has been turned into a pink pony !" << std::endl;
}

Peon
&Peon::operator=( Peon const & rhs) {
	if (this != &rhs)
		setName(rhs.getName());
	return *this;
}