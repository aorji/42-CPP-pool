/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:43 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:44 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator ( void ) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ) {
	std::cout << "* teleports from space *" << std::endl;
	(void)src;
	return;
}

ISpaceMarine*
AssaultTerminator::clone() const {
	return (new AssaultTerminator());
}

void
AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void
AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void
AssaultTerminator::meleeAttack() const {
	std::cout << "“* attacks with chainfists *" << std::endl;
}

AssaultTerminator
&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}
