/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:11 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 11:00:12 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club): _weapon(club), _humanAName(name) {
	return;
}

HumanA::~HumanA() {
	return;
}

void
HumanA::attack() {
	std::cout << this->_humanAName << " attacks with his " << this->_weapon.getType() << std::endl;
	return;
}