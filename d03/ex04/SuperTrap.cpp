/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:25:43 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 18:25:44 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) {
	std::cout << "SuperTrap default constructor called" << std::endl;
	setName("default name");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
}

SuperTrap::SuperTrap( std::string name ) {
	std::cout << "SuperTrap constructor called" << std::endl;
	setName(name);
	srand ( time(NULL) );
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
}

SuperTrap::SuperTrap( SuperTrap const & src) {
	std::cout << "SuperTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

SuperTrap::~SuperTrap() {
	std::cout << "\033[41m<Game over!>\033[0m" << std::endl;
	std::cout << "ScavTrap destructor called" << std::endl;
}
//
//	attacks
//
void
SuperTrap::meleeAttack(std::string const &target) {
	return FragTrap::rangedAttack(target);
}

void
SuperTrap::rangedAttack(std::string const &target) {
	return NinjaTrap::meleeAttack(target);
}
//
//assignation operator
//
SuperTrap
&SuperTrap::operator=( SuperTrap const & rhs) {
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setMaxHitPoints(rhs.getMaxHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setMaxEnergyPoints(rhs.getMaxEnergyPoints());
		setLevel(rhs.getLevel());
		setMeleeAttackDamage(rhs.getMeleeAttackDamage());
		setRangedAttackDamage(rhs.getRangedAttackDamage());
		setArmorDamageReduction(rhs.getArmorDamageReduction());
	}
	return *this;
}