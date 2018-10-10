/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:05:07 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:05:10 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent zombie;
	ZombieEvent zombie1;


	std::cout << "\033[32mrandom name\033[0m" << std::endl;
	zombie.randomChump();


	std::cout << "\033[32mon heap\033[0m" << std::endl;
	Zombie *zmb = zombie1.newZombie("Lola");
	zombie1.setZombieType("love creator");
	zmb->announce();
	delete zmb;


	std::cout << "\033[32mrandom name\033[0m" << std::endl;
	zombie.setZombieType("hater");
	zombie.randomChump();


	std::cout << "\033[32mon stack\033[0m" << std::endl;
	Zombie zombie2 = Zombie("Alex", "killer");
	zombie2.announce();

	return 0;

	// system("leaks a.out");
}