/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:16 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 11:00:17 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

private:
	Weapon& _weapon;
	std::string _humanAName;

public:
	HumanA(std::string name, Weapon& club);
	~HumanA();

	void attack(); //disp NAME attacks with his WEAPON_TYPE

};

#endif