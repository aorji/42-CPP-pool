/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:22 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 11:00:24 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

private:
	Weapon* _weapon;
	std::string _humanBName;

public:
	HumanB(std::string name);
	~HumanB();

	void attack(); //disp NAME attacks with his WEAPON_TYPE
	void setWeapon(Weapon &club);

};

#endif