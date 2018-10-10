/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:37 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:38 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
# define MUTANT_HPP

#include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant: public Enemy {

public:
	SuperMutant( void );
	SuperMutant( SuperMutant const & src );
	~SuperMutant();
	
	void takeDamage(int damage);

	SuperMutant & operator=( SuperMutant const & rhs);
};

#endif