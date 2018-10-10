/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:21 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:22 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( int hp, std::string const & type ): _HP(hp), _type(type) {
	std::cout << "Constructor called" << std::endl;
}

Enemy::Enemy( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Enemy::Enemy( Enemy const & src ) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Enemy::~Enemy() {
}

std::string const 
Enemy::getType() const { return _type; }
int
Enemy::getHP() const { return _HP; }

void
Enemy::setHP(int hp) { _HP = hp; }
void
Enemy::setType(std::string const type) { _type = type; }

void
Enemy::takeDamage(int damage) {
	if (_HP < 0)
		return ;
	else if (_HP < damage)
		_HP = 0;
	else
		_HP -= damage;
}

Enemy &
Enemy::operator=( Enemy const & rhs) {
	if (this != &rhs) {
		this->_HP = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}