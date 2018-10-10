/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:10:33 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:10:34 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>
#include <ctime>

class Sorcerer {

private:
	std::string _name;
	std::string _title;
	Sorcerer( void );				// default constructor

public:
	//
	//	constructor/destructor
	//
	Sorcerer( Sorcerer const & src);
	Sorcerer( std::string name, std::string title );
	~Sorcerer();
	//
	// methods
	//
	void polymorph(Victim const & victim) const;
	//
	//	getters
	//
	std::string getName( void ) const;
	std::string getTitle( void ) const;
	//
	//	setters
	//
	//
	//assignation operator
	//
	Sorcerer & operator=( Sorcerer const & rhs);

};

std::ostream & operator<<( std::ostream & ost, Sorcerer const & obj);

#endif