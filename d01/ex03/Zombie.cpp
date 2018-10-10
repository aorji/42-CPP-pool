/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:08:57 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:08:58 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Zombie::Zombie(std::string name, std::string type) : _zombieName(name), _zombieType(type) {
	std::cout << "Say happy birthday to "<<  _zombieName <<"!!" << std::endl;
	return;
}

Zombie::~Zombie() {
	std::cout << "RIP "<< _zombieName << std::endl;
	return;
}

Zombie::Zombie() {
	_zombieName = createRandomName();
	return;
}


std::string Zombie::createRandomName() {

	std::string name;
	int i = 0;

	int nameLen = rand() % 10;
	!nameLen ? nameLen++ : 0;
	while (i < nameLen) {
		if (!i)
			name += (65 + rand() % 26) ;
		else
			name += (97 + rand() % 26) ;
		i++;
	}
	return name;
}

void Zombie::announce() {
	std::cout << "<" << this->_zombieName << " (" << this->_zombieType << ")> Braiiiiiiinnnssss..." << std::endl;
}
