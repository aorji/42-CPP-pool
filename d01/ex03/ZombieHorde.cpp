/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:09:55 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:09:57 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int N) {
	srand(time(NULL));
	N < 0 ? N = 0 : 0;
	zombie = new Zombie[N];
	_numberOfZombie = N;
}

ZombieHorde::~ZombieHorde() {
	delete[] zombie;
}

void ZombieHorde::announce() {
	int i = 0;

	while (i < this->_numberOfZombie) {
		this->zombie[i].announce();
		i++;
	}
}