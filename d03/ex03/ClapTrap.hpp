/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:52:28 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 16:52:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ClapTrap {

private:

	unsigned int _hitPoints; 			
	unsigned int _maxHitPoints;			
	unsigned int _energyPoints;			
	unsigned int _maxEnergyPoints;		
	unsigned int _level;					
	
	std::string _name;			
	unsigned int _meleeAttackDamage;		
	unsigned int _rangedAttackDamage;	
	unsigned int _armorDamageReduction;	

public:
	//
	//	constructor/destructor
	//
	ClapTrap( void );
	ClapTrap( ClapTrap const & src);
	ClapTrap( std::string name );
	~ClapTrap();
	//
	//	attacks
	//
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void energyReducer( unsigned int amount );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
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
	ClapTrap & operator=( ClapTrap const & rhs);

};

#endif