/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:57:23 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 10:57:24 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType): _type(newType) {
	return;
}

Weapon::~Weapon() {
	return;
}

void
Weapon::setType(std::string newType) {
	this->_type = newType;
	return;
}

const std::string & 
Weapon::getType() {
	return this->_type;
}