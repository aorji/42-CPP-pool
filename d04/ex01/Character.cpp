/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:23:04 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:23:05 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _AP(40), _weapon(NULL) {
	std::cout << "Constructor called" << std::endl;
}

Character::Character( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Character::Character( Character const & src ) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Character::~Character() {
}

void
Character::recoverAP() {
	if (_AP <= 30)
		_AP += 10;
}
void
Character::equip(AWeapon *weapon) { _weapon = weapon; }
void
Character::attack(Enemy *enemy) {
	if (!_AP || _AP < _weapon->getAPCost())
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a ";
	std::cout << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	_AP -= _weapon->getAPCost();
}

std::string const 
Character::getName( void ) const { return _name; }
int
Character::getAP( void ) const { return _AP; }
AWeapon *
Character::getWeapon( void ) const { return _weapon; }

void
Character::setAP(int ap) { _AP = ap; }
void
Character::setName(std::string const name) { _name = name; }
void
Character::setWeapon(AWeapon *weapon) { _weapon = weapon; }

std::ostream & operator<<( std::ostream & ost, Character const & obj) {
	if (obj.getWeapon())
		ost << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	else
		ost << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl; 
	return ost;
}

Character &
Character::operator=( Character const & rhs) {
	if (this != &rhs) {
		setAP(rhs.getAP());
		setName(rhs.getName());
		setWeapon(rhs.getWeapon());
	}
	return *this;
}