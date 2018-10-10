/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:33 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:34 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src ) {
	*this = src;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void
SuperMutant::takeDamage(int damage) {
	if (getHP() < 0)
		return ;
	else if (getHP() < (damage - 3))
		setHP(0);
	else
		setHP(getHP() - (damage - 3));
}

SuperMutant &
SuperMutant::operator=( SuperMutant const & rhs) {
	if (this != &rhs) {
		setHP(rhs.getHP());
		setType(rhs.getType());
	}
	return *this;
}