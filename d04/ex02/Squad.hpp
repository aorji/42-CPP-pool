/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:04 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:05 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

# include <iostream>
# include <string>

class Squad : public ISquad {

	private:
        
        typedef struct        s_container
        {
            ISpaceMarine          *unit;
            struct s_container    *next;
        }                     t_container;

        int                   _unitsNb;
        t_container           *_squad;

	public:
		Squad( void );
		Squad( Squad const & src);

		~Squad( void );

		int getCount( void ) const;
		ISpaceMarine* getUnit(int N) const;
		int push(ISpaceMarine* unit);

		Squad & operator=( Squad const & rhs);

		void copyUnits(const Squad &src);
        void destroyUnits(void);
        bool unitAlreadyIn(ISpaceMarine *marine, t_container *squad);
};

#endif