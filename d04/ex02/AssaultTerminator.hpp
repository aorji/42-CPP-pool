/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:37 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:40 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssaultTerminator: public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator( AssaultTerminator const & src );
	~AssaultTerminator();
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	AssaultTerminator & operator=( AssaultTerminator const & rhs);
};

#endif
