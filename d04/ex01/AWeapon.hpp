/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:21:36 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:21:37 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {
	
private:
	std::string _name;
	int _APCost;
	int _damage;

public:
	AWeapon( void );
	AWeapon( AWeapon const & src );
	AWeapon( std::string const & name, int apcost, int damage );
	virtual ~AWeapon( void );

	std::string const getName( void ) const;
	int getAPCost( void ) const;
	int getDamage( void ) const;

	void setName(std::string const name);
	void setAPCost( int n );
	void setDamage( int n );

	virtual void attack( void ) const = 0;

	AWeapon & operator=( AWeapon const & rhs);
};

#endif