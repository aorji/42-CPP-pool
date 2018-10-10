/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:21:56 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:21:57 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & src );
	~PlasmaRifle( void );

	void attack( void ) const;

	PlasmaRifle & operator=( PlasmaRifle const & rhs);
};

#endif