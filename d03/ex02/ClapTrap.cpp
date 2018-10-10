/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:52:24 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 16:52:24 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//
//	constructor/destructor
//
ClapTrap::ClapTrap( std::string name ): _name(name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	_name = "default name";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

ClapTrap::ClapTrap( ClapTrap const & src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[41m<Game over!>\033[0m" << std::endl;
	std::cout << "ClapTrap destructor called" << std::endl;
}
//
//	attacks
//
void
ClapTrap::rangedAttack( std::string const & target ) {
	std::cout << "<ClapTrap> <" << getName()<< "> attacks <" << target;
	std::cout << "> at range, causing <" << (getRangedAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
ClapTrap::meleeAttack( std::string const & target ) {
	std::cout << "<ClapTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getMeleeAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
ClapTrap::takeDamage( unsigned int amount ) {
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
ClapTrap::energyReducer( unsigned int amount ) {
	std::cout << "<" << _name << "> reduce energy by " << amount;
	std::cout << std::endl;
	
	if (_energyPoints >= amount) {
		_energyPoints -= amount;
	} else {
		_energyPoints = 0;
	}
}

void
ClapTrap::beRepaired( unsigned int amount ) {
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
//	getters
//
std::string ClapTrap::getName( void ) const{ return this->_name; }
int ClapTrap::getHitPoints( void ) const { return this->_hitPoints; }
int ClapTrap::getMaxHitPoints( void ) const { return this->_maxHitPoints; } 
int ClapTrap::getEnergyPoints( void ) const { return this->_energyPoints; }
int ClapTrap::getMaxEnergyPoints( void ) const { return this->_maxEnergyPoints; }
int ClapTrap::getLevel( void ) const { return this->_level; }
int ClapTrap::getMeleeAttackDamage( void ) const { return this->_meleeAttackDamage; }
int ClapTrap::getRangedAttackDamage( void ) const { return this->_rangedAttackDamage; }
int ClapTrap::getArmorDamageReduction( void ) const { return this->_armorDamageReduction; }
//
//	setters
//
void ClapTrap::setName( std::string name ){
	this->_name = name;
	std::cout << "name: " << this->_name << std::endl;
	return;
}

void ClapTrap::setHitPoints( int point ) {
	this->_hitPoints = point;
	std::cout << "hitPoints: " << this->_hitPoints << std::endl;
	return;
}

void ClapTrap::setMaxHitPoints( int point ) {
	this->_maxHitPoints = point;
	std::cout << "maxHitPoints: " << this->_maxHitPoints << std::endl;
	return;
} 
void ClapTrap::setEnergyPoints( int point ) {
	this->_energyPoints = point;
	std::cout << "energyPoints: " << this->_energyPoints << std::endl;
	return;
}

void ClapTrap::setMaxEnergyPoints( int point ) {
	this->_maxEnergyPoints = point;
	std::cout << "maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	return;
}

void ClapTrap::setLevel( int point ) {
	this->_level = point;
	std::cout << "level: " << this->_level << std::endl;
	return; }
void ClapTrap::setMeleeAttackDamage( int point) {
	this->_meleeAttackDamage = point;
	std::cout << "meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	return;
}
void ClapTrap::setRangedAttackDamage( int point ) {
	this->_rangedAttackDamage = point;
	std::cout << "rangedAttackDamage: " << this->_rangedAttackDamage << std::endl;
	return;
}
void ClapTrap::setArmorDamageReduction( int point ) {
	this->_armorDamageReduction = point;
	std::cout << "armorDamageReduction: " << this->_armorDamageReduction << std::endl;
	return;
}
//
//assignation operator
//
ClapTrap
&ClapTrap::operator=( ClapTrap const & rhs) {
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

