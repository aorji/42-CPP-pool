/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:51:18 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 17:51:19 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class NinjaTrap: virtual public ClapTrap {

public:
	NinjaTrap( std::string name );
	NinjaTrap( void );
	NinjaTrap( NinjaTrap const & src);
	~NinjaTrap( void );

	void ninjaShoebox(NinjaTrap &attack);
	void ninjaShoebox(FragTrap &attack);
	void ninjaShoebox(ScavTrap &attack);
	//
	//	attacks
	//
	virtual void rangedAttack( std::string const & target );
	virtual void meleeAttack( std::string const & target );
	//
	//assignation operator
	//
	NinjaTrap & operator=( NinjaTrap const & rhs);
};

#endif