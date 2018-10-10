/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:27 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 11:00:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _humanBName(name) {
	return;
}

HumanB::~HumanB() {
	return;
}

void
HumanB::attack() {
	std::cout << this->_humanBName << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}

void
HumanB::setWeapon(Weapon &club) {
	this->_weapon = &club;
}