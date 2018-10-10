/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:49 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:50 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

#include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion: public Enemy {

public:
	RadScorpion( void );
	RadScorpion( RadScorpion const & src );
	~RadScorpion();

	RadScorpion & operator=( RadScorpion const & rhs);
};

#endif