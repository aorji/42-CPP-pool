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

#include <string>
#include <iostream>
#include <ctime>

class ScavTrap {

private:

	unsigned int _hitPoints; 							// (100)
	unsigned int _maxHitPoints;							// (100)
	unsigned int _energyPoints;							// (50)
	unsigned int _maxEnergyPoints;						// (50)
	int _level;									// (1)
	
	std::string _name;							// (Parameter of constructor)
	unsigned int _meleeAttackDamage;						// (20)
	unsigned int _rangedAttackDamage;					// (15)	
	unsigned int _armorDamageReduction;					// (3)

public:
	//
	//	constructor/destructor
	//
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap();
	//
	//	attacks
	//
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void energyReducer( unsigned int amount );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
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
	//	getters
	//
	std::string getName( void ) const;
	int getHitPoints( void ) const;
	int getMaxHitPoints( void ) const; 
	int getEnergyPoints( void ) const;
	int getMaxEnergyPoints( void ) const;
	int getLevel( void ) const;
	int getMeleeAttackDamage( void ) const;
	int getRangedAttackDamage( void ) const;
	int getArmorDamageReduction( void ) const;
	//
	//	setters
	//
	void setName( std::string name );
	void setHitPoints( int point );
	void setMaxHitPoints( int point ); 
	void setEnergyPoints( int point );
	void setMaxEnergyPoints( int point );
	void setLevel( int point );
	void setMeleeAttackDamage( int point );
	void setRangedAttackDamage( int point );
	void setArmorDamageReduction( int point );
	//
	//assignation operator
	//
	ScavTrap & operator=( ScavTrap const & rhs);

};

#endif

