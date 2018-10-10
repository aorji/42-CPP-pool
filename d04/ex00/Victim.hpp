/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:10:48 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 14:10:48 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>
#include <ctime>

class Victim {

private:
	std::string _name;

public:
	//
	//	constructor/destructor
	//
	Victim( Victim const & src);
	Victim( std::string name );
	Victim( void );				// default constructor
	~Victim();
	//
	// methods
	//
	virtual void getPolymorphed( void ) const; 
	//
	//	getters
	//
	std::string getName( void ) const;
	//
	//	setters
	//
	void setName(std::string name);
	//
	//assignation operator
	//
	Victim & operator=( Victim const & rhs);

};

std::ostream & operator<<( std::ostream & ost, Victim const & obj);

#endif
