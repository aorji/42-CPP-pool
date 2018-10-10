/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:44:15 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 20:44:17 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
//
//	constructor/destructor
//
FragTrap::FragTrap( std::string name ) {
	srand ( time(NULL) );
	std::cout << "FragTrap constructor called" << std::endl;
	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
}

FragTrap::FragTrap( void ) {
	std::cout << "FragTrap default constructor called" << std::endl;
	srand ( time(NULL) );
	setName("default name");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
}

FragTrap::FragTrap( FragTrap const & src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "\033[41m<Game over!>\033[0m" << std::endl;
	std::cout << "FragTrap destructor called" << std::endl;
}
//
//	attacks
//
void
FragTrap::rangedAttack( std::string const & target ) {
	std::cout << "<FragTrap> <" << getName()<< "> attacks <" << target;
	std::cout << "> at range, causing <" << (getRangedAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
FragTrap::meleeAttack( std::string const & target ) {
	std::cout << "<FragTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getMeleeAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}
//
//	random attacks
//
void
FragTrap::saveEnemy( std::string const & target ) {
	std::cout << "<\"saveEnemy\" attack called!>";
	std::cout << std::endl;
	std::cout << "Target: " << target;
	std::cout << std::endl;
	std::cout << "You save your enemy, loser";
	std::cout << std::endl;
}

void
FragTrap::killYourself( std::string const & target ) {
	std::cout << "<\"killYourself\" attack called!>";
	std::cout << std::endl;
	std::cout << "Target: " << target;
	std::cout << std::endl;
	std::cout << "You kill yourself, loser";
	std::cout << std::endl;
	takeDamage(100);
	energyReducer(100);
}

void
FragTrap::badaBoom( std::string const & target ) { 
	std::cout << "<\"badaBoom\" attack called!>"<< std::endl;
	std::cout << "Target: " << target;
	std::cout << std::endl;
	beRepaired(40);
}

void
FragTrap::useless( std::string const & target ) {
	std::cout << "<\"Useless\" attack called!>";
	std::cout << std::endl;
	std::cout << "Target: " << target;
	std::cout << std::endl;
	std::cout << "Nothing is going to happend";
	std::cout << std::endl;
}

void
FragTrap::youWin( std::string const & target ) {
	std::cout << "<\"youWin\" attack called!>";
	std::cout << std::endl;
	std::cout << "Loser: " << target;
	std::cout << std::endl;
	beRepaired(100);
}

void
FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::cout << "\033[42m\033[30mTake a chance!\033[0m";
	std::cout << std::endl;
	int attackIndex = rand() % 5; //0-4

	if (getEnergyPoints() < 25) {
		std::cout << "\033[41m<No energy. Good luck you, dude!>\033[0m" << std::endl;
		return ;
	}
	energyReducer(25);
	void (FragTrap::*ptr[5])(std::string const & target) =
	{&FragTrap::saveEnemy, &FragTrap::killYourself, &FragTrap::badaBoom, &FragTrap::useless, &FragTrap::youWin};
	(this->*ptr[attackIndex])(target);
}
//
//assignation operator
//
FragTrap
&FragTrap::operator=( FragTrap const & rhs) {
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
