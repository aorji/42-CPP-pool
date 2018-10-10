/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:09:48 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:09:49 by aorji            ###   ########.fr       */
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
	static std::string createRandomName();

public:
	Zombie(std::string name, std::string type = "type");
	Zombie();
	~Zombie();

	void announce();
};

#endif