/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:05:19 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:05:20 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
ZombieEvent::ZombieEvent() {
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {

	//get type
	if (this->_zombieType.empty())
		std::cout << "enter zombie type: ";
	while (this->_zombieType.empty())
		std::getline(std::cin, this->_zombieType);
	//create zombie with name and type
	Zombie* newOne = new Zombie(name, this->_zombieType);
	return (newOne);
}

void ZombieEvent::randomChump() {

	std::string name;
	int i = 0;
	srand ( time(NULL) );

	int nameLen = rand() % 10;

	!nameLen ? nameLen++ : 0;
	while (i < nameLen) {
		if (i == 0)
			name += (65 + rand() % 26) ;
		else
			name += (97 + rand() % 26) ;
		i++;
	}

	Zombie *zmb = newZombie(name);
	
	zmb->announce();

	delete zmb;
}