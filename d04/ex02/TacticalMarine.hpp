/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:12 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:13 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICA_MARINE_HPP
# define TACTICA_MARINE_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine: public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine( TacticalMarine const & src );
	~TacticalMarine();
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	TacticalMarine & operator=( TacticalMarine const & rhs);
};

#endif