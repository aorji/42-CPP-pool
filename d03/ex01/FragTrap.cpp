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
FragTrap::FragTrap( std::string name ): _name(name) {
	srand ( time(NULL) );
	std::cout << "Constructor called" << std::endl;

	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap( void ) {
	srand ( time(NULL) );
	std::cout << "Default constructor called" << std::endl;

	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap( FragTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "\033[41m<Game over!>\033[0m";
	std::cout << std::endl;
	std::cout << "Destructor called" << std::endl;
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

void
FragTrap::takeDamage( unsigned int amount ) {
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
FragTrap::energyReducer( unsigned int amount ) {
	std::cout << "<" << _name << "> reduce energy by " << amount;
	std::cout << std::endl;
	
	if (_energyPoints >= amount) {
		_energyPoints -= amount;
	} else {
		_energyPoints = 0;
	}
}

void
FragTrap::beRepaired( unsigned int amount ) {
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

	if (_energyPoints < 25) {
		std::cout << "\033[41m<No energy. Good luck you, dude!>\033[0m" << std::endl;
		return ;
	}
	energyReducer(25);
	void (FragTrap::*ptr[5])(std::string const & target) =
	{&FragTrap::saveEnemy, &FragTrap::killYourself, &FragTrap::badaBoom, &FragTrap::useless, &FragTrap::youWin};
	(this->*ptr[attackIndex])(target);
}
//
//	getters
//
std::string FragTrap::getName( void ) const{ return this->_name; }
int FragTrap::getHitPoints( void ) const { return this->_hitPoints; }
int FragTrap::getMaxHitPoints( void ) const { return this->_maxHitPoints; } 
int FragTrap::getEnergyPoints( void ) const { return this->_energyPoints; }
int FragTrap::getMaxEnergyPoints( void ) const { return this->_maxEnergyPoints; }
int FragTrap::getLevel( void ) const { return this->_level; }
int FragTrap::getMeleeAttackDamage( void ) const { return this->_meleeAttackDamage; }
int FragTrap::getRangedAttackDamage( void ) const { return this->_rangedAttackDamage; }
int FragTrap::getArmorDamageReduction( void ) const { return this->_armorDamageReduction; }
//
//	setters
//
void FragTrap::setName( std::string name ){
	this->_name = name;
	std::cout << "name: " << this->_name << std::endl;
	return;
}

void FragTrap::setHitPoints( int point ) {
	this->_hitPoints = point;
	std::cout << "hitPoints: " << this->_hitPoints << std::endl;
	return;
}

void FragTrap::setMaxHitPoints( int point ) {
	this->_maxHitPoints = point;
	std::cout << "maxHitPoints: " << this->_maxHitPoints << std::endl;
	return;
} 
void FragTrap::setEnergyPoints( int point ) {
	this->_energyPoints = point;
	std::cout << "energyPoints: " << this->_energyPoints << std::endl;
	return;
}

void FragTrap::setMaxEnergyPoints( int point ) {
	this->_maxEnergyPoints = point;
	std::cout << "maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	return;
}

void FragTrap::setLevel( int point ) {
	this->_level = point;
	std::cout << "level: " << this->_level << std::endl;
	return; }
void FragTrap::setMeleeAttackDamage( int point) {
	this->_meleeAttackDamage = point;
	std::cout << "meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	return;
}
void FragTrap::setRangedAttackDamage( int point ) {
	this->_rangedAttackDamage = point;
	std::cout << "rangedAttackDamage: " << this->_rangedAttackDamage << std::endl;
	return;
}
void FragTrap::setArmorDamageReduction( int point ) {
	this->_armorDamageReduction = point;
	std::cout << "armorDamageReduction: " << this->_armorDamageReduction << std::endl;
	return;
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

