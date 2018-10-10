/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:09 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:10 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIRST_HPP
# define POWER_FIRST_HPP

#include "AWeapon.hpp"
# include <iostream>
# include <string>

class PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist( PowerFist const & src );
	~PowerFist( void );

	void attack( void ) const;

	PowerFist & operator=( PowerFist const & rhs);
};

#endif