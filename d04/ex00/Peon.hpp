/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:09:58 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:09:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>
#include <ctime>

class Peon : public Victim{

public:
	//
	//	constructor/destructor
	//
	Peon( Peon const & src );
	Peon( std::string name );
	Peon( void );
	~Peon();
	//
	// methods
	//
	void getPolymorphed( void ) const;
	//
	//assignation operator
	//
	Peon & operator=( Peon const & rhs);

};

#endif