/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:05:25 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:05:26 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

private:
	std::string _zombieType;

public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name); //create a Zombie with the chosen type, name it, and return it
	void randomChump(); //create a Zombie with a random name, and make it announce itself
};

#endif