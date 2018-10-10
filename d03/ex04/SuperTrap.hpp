/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:25:48 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 18:25:49 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class SuperTrap: public FragTrap, public NinjaTrap {

public:
	//
	//	constructor/destructor
	//
	SuperTrap( void );
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src);
	~SuperTrap();
	//
	//	attacks
	//
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	//
	//assignation operator
	//
	SuperTrap & operator=( SuperTrap const & rhs);
};

#endif

