/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:27 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine ( void ) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "“Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src ) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	(void)src;
	return;
}

void
TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void
TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void
TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine*
TacticalMarine::clone() const {
	return (new TacticalMarine());
}

TacticalMarine
&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

