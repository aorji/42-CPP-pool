/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:48:30 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 15:48:31 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//
//	constructor/destructor
//
ScavTrap::ScavTrap( std::string name ) {
	srand ( time(NULL) );
	std::cout << "ScavTrap constructor called" << std::endl;
	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
}

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap default constructor called" << std::endl;
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

ScavTrap::ScavTrap( ScavTrap const & src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}


ScavTrap::~ScavTrap() {
	std::cout << "\033[41m<Game over!>\033[0m" << std::endl;
	std::cout << "ScavTrap destructor called" << std::endl;
}
//
//Attack
//
void
ScavTrap::rangedAttack( std::string const & target ) {
	std::cout << "<ScavTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getRangedAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
ScavTrap::meleeAttack( std::string const & target ) {
	std::cout << "<ScavTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getMeleeAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}
//
// Challenges
//
void
ScavTrap::eatWearChallenge( void ) {
	std::cout << "<\"The Eat It or Wear It Challenge\">";
	std::cout << std::endl;
}

void
ScavTrap::yogaChallenge( void ) {
	std::cout << "<\"The Yoga Challenge\">";
	std::cout << std::endl;
}

void
ScavTrap::bottleFlipChallenge( void ) {
	std::cout << "<\"Water Bottle Flip challenge\">";
	std::cout << std::endl;
}

void
ScavTrap::chubbyBunnyChallenge( void ) {
	std::cout << "<\"Chubby Bunny Fun Challenge\">";
	std::cout << std::endl;
}

void
ScavTrap::makeupChallenge( void ) {
	std::cout << "<\"Boyfriend Does My Makeup Challenge\">";
	std::cout << std::endl;
}

void
ScavTrap::challengeNewcomer( void ) {
	std::cout << "\033[42m\033[30mTake a chance!\033[0m";
	std::cout << std::endl;
	int challengeIndex = rand() % 5; //0-4

	if (getEnergyPoints() < (challengeIndex * 2)) {
		std::cout << "\033[41m<No energy. Good luck you, dude!>\033[0m" << std::endl;
		return ;
	}
	energyReducer(challengeIndex * 2);
	void (ScavTrap::*ptr[5])( void ) =
	{&ScavTrap::makeupChallenge, &ScavTrap::eatWearChallenge, &ScavTrap::yogaChallenge, &ScavTrap::bottleFlipChallenge, &ScavTrap::chubbyBunnyChallenge};
	(this->*ptr[challengeIndex])();
}
//
//assignation operator
//
ScavTrap
&ScavTrap::operator=( ScavTrap const & rhs) {
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