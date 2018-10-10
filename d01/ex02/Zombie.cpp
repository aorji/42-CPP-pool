/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:04:56 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:04:58 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombieName(name), _zombieType(type) {
	std::cout << "Say happy birthday to "<<  _zombieName <<"!!" << std::endl;
	return;
}

Zombie::~Zombie() {
	std::cout << "RIP :0" << std::endl;
	return;
}

void Zombie::announce() {
	std::cout << "<" << this->_zombieName << " (" << this->_zombieType << ")> Braiiiiiiinnnssss..." << std::endl;
}
