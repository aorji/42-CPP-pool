/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:57:18 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 10:57:20 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

private:
	std::string _type;

public:
	Weapon(std::string newType);
	~Weapon();

	std::string const & getType();
	void setType(std::string newType);

};
#endif