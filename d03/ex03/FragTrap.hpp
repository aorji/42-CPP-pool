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

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class FragTrap: virtual public ClapTrap {

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
	virtual void rangedAttack( std::string const & target );
	virtual void meleeAttack( std::string const & target );
	//
	//	random attacks
	//
	void vaulthunter_dot_exe(std::string const & target);
	void saveEnemy( std::string const & target );
	void killYourself( std::string const & target );
	void badaBoom( std::string const & target );
	void youWin( std::string const & target );
	void useless( std::string const & target );
	//
	//assignation operator
	//
	FragTrap & operator=( FragTrap const & rhs);
};

#endif