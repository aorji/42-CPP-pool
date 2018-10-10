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
ScavTrap::ScavTrap( std::string name ): _name(name) {
	srand ( time(NULL) );
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	srand ( time(NULL) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( ScavTrap const & src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[41m<Game over!>\033[0m";
	std::cout << std::endl;
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

void
ScavTrap::takeDamage( unsigned int amount ) {
	std::cout << "<" << _name << "> take ";
	std::cout << amount << " points of damage !";
	std::cout << std::endl;
	if ((_hitPoints + _armorDamageReduction) >= amount) {
		_hitPoints -= amount - _armorDamageReduction;
	} else {
		_hitPoints = 0;
	}
}

void
ScavTrap::energyReducer( unsigned int amount ) {
	std::cout << "<" << _name << "> reduce energy by " << amount;
	std::cout << std::endl;
	
	if (_energyPoints >= amount) {
		_energyPoints -= amount;
	} else {
		_energyPoints = 0;
	}
}

void
ScavTrap::beRepaired( unsigned int amount ) {
	std::cout << "<" << _name << "> increase energy&&hit points by " << amount;
	std::cout << std::endl;

	if ((_hitPoints + amount) <= _maxHitPoints)
		_hitPoints += amount;
	else
		_hitPoints = _maxHitPoints;
	if ((_energyPoints + amount) <= _maxEnergyPoints)
		_energyPoints += amount;
	else
		_energyPoints = _maxEnergyPoints;
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
	unsigned int challengeIndex = rand() % 5; //0-4

	if (_energyPoints < (challengeIndex * 2)) {
		std::cout << "\033[41m<No energy. Good luck you, dude!>\033[0m" << std::endl;
		return ;
	}
	energyReducer(challengeIndex * 2);
	void (ScavTrap::*ptr[5])( void ) =
	{&ScavTrap::makeupChallenge, &ScavTrap::eatWearChallenge, &ScavTrap::yogaChallenge, &ScavTrap::bottleFlipChallenge, &ScavTrap::chubbyBunnyChallenge};
	(this->*ptr[challengeIndex])();
}
//
//	getters
//
std::string ScavTrap::getName( void ) const{ return this->_name; }
int ScavTrap::getHitPoints( void ) const { return this->_hitPoints; }
int ScavTrap::getMaxHitPoints( void ) const { return this->_maxHitPoints; } 
int ScavTrap::getEnergyPoints( void ) const { return this->_energyPoints; }
int ScavTrap::getMaxEnergyPoints( void ) const { return this->_maxEnergyPoints; }
int ScavTrap::getLevel( void ) const { return this->_level; }
int ScavTrap::getMeleeAttackDamage( void ) const { return this->_meleeAttackDamage; }
int ScavTrap::getRangedAttackDamage( void ) const { return this->_rangedAttackDamage; }
int ScavTrap::getArmorDamageReduction( void ) const { return this->_armorDamageReduction; }
//
//	setters
//
void ScavTrap::setName( std::string name ){
	this->_name = name;
	std::cout << "name: " << this->_name << std::endl;
	return;
}

void ScavTrap::setHitPoints( int point ) {
	this->_hitPoints = point;
	std::cout << "hitPoints: " << this->_hitPoints << std::endl;
	return;
}

void ScavTrap::setMaxHitPoints( int point ) {
	this->_maxHitPoints = point;
	std::cout << "maxHitPoints: " << this->_maxHitPoints << std::endl;
	return;
} 
void ScavTrap::setEnergyPoints( int point ) {
	this->_energyPoints = point;
	std::cout << "energyPoints: " << this->_energyPoints << std::endl;
	return;
}

void ScavTrap::setMaxEnergyPoints( int point ) {
	this->_maxEnergyPoints = point;
	std::cout << "maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	return;
}

void ScavTrap::setLevel( int point ) {
	this->_level = point;
	std::cout << "level: " << this->_level << std::endl;
	return; }
void ScavTrap::setMeleeAttackDamage( int point) {
	this->_meleeAttackDamage = point;
	std::cout << "meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	return;
}
void ScavTrap::setRangedAttackDamage( int point ) {
	this->_rangedAttackDamage = point;
	std::cout << "rangedAttackDamage: " << this->_rangedAttackDamage << std::endl;
	return;
}
void ScavTrap::setArmorDamageReduction( int point ) {
	this->_armorDamageReduction = point;
	std::cout << "armorDamageReduction: " << this->_armorDamageReduction << std::endl;
	return;
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


