/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:05:01 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:05:02 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

private:
	std::string _zombieName;
	std::string _zombieType;

public:
	Zombie(std::string name, std::string type = "type");
	~Zombie();

	void announce();
};

#endif