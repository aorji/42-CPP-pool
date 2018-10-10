/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:23:08 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:23:09 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string _name;
	int _AP;
	AWeapon *_weapon;

public:
	Character(std::string const & name);
	Character( void );
	Character( Character const & src);
	~Character();
	
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const getName( void ) const;
	int getAP( void ) const;
	AWeapon *getWeapon( void ) const;

	void setAP(int ap);
	void setName(std::string const name);
	void setWeapon(AWeapon *weapon);

	Character & operator=( Character const & rhs);
};

std::ostream & operator<<( std::ostream & ost, Character const & obj);

#endif