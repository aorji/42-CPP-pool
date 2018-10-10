/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:10:00 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:10:01 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

private:
	int _numberOfZombie;

public:
	Zombie *zombie;

	ZombieHorde(int N);
	~ZombieHorde();

	void announce();
};

#endif