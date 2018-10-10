/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:44:20 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 20:44:22 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class FragTrap {

private:

	unsigned int _hitPoints; 							// (100)
	unsigned int _maxHitPoints;							// (100)
	unsigned int _energyPoints;							// (100)
	unsigned int _maxEnergyPoints;						// (100)
	unsigned int _level;								// (1)
	
	std::string _name;									// (Parameter of constructor)
	unsigned int _meleeAttackDamage;					// (30)
	unsigned int _rangedAttackDamage;					// (20)	
	unsigned int _armorDamageReduction;					// (5)

public:
	//
	//	constructor/destructor
	//
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src);
	~FragTrap();
	//
	//	attacks
	//
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void energyReducer( unsigned int amount );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	//random attacks
	void vaulthunter_dot_exe(std::string const & target);
	void saveEnemy( std::string const & target );
	void killYourself( std::string const & target );
	void badaBoom( std::string const & target );
	void youWin( std::string const & target );
	void useless( std::string const & target );
	//
	//	getters
	//
	std::string getName( void )  const;
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
	FragTrap & operator=( FragTrap const & rhs);

};

#endif