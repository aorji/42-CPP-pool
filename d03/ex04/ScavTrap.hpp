/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:48:34 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 15:48:35 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class ScavTrap: public ClapTrap {

public:
	//
	//	constructor/destructor
	//
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap();
	//
	//	Challenges
	//
	void challengeNewcomer( void );
	void eatWearChallenge( void );
	void yogaChallenge( void );
	void bottleFlipChallenge( void );
	void chubbyBunnyChallenge( void );
	void makeupChallenge( void );
	//
	//	Attack
	//
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	//
	//assignation operator
	//
	ScavTrap & operator=( ScavTrap const & rhs);
};

#endif

