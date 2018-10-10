/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:25:58 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:00 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad ( void ) {
	_unitsNb = 0;
	_squad = NULL;

}

Squad::Squad ( Squad const & src ) {
	copyUnits(src);
    _unitsNb = src.getCount();
    return ;
}

Squad::~Squad ( void ) {
	destroyUnits();
    return ;
}

int
Squad::getCount( void ) const { return _unitsNb; }

ISpaceMarine*
Squad::getUnit( int N ) const {
    t_container  *tmp;

    tmp = _squad;
    if (N < 0 || N >= _unitsNb) { return (NULL); }
    int i = 0;
    for (int i = 0; i < N; i++) {
    	tmp = tmp->next;
    }
    return (tmp->unit);
}

int
Squad::push(ISpaceMarine* unit) {
	t_container *tmp;

	if (!unit)
		return (_unitsNb);
	if (!_squad) {
		_squad = new t_container();
		_squad->unit = unit;
		_squad->next = NULL;
	}
	else {
		tmp = _squad;
		while(tmp && tmp->next) {
			tmp = tmp->next;
		}
		tmp->next = new t_container();
		tmp->next->unit = unit;
		tmp->next->next = NULL;
	}
	_unitsNb++;
	return _unitsNb;
} 

void
Squad::copyUnits(const Squad &src) {
	int i = 0;
	while (i < src.getCount()) {
		push(src.getUnit(i));
		i++;
	}	
}

void
Squad::destroyUnits(void) {
	t_container *tmp;
	ISpaceMarine *tmpUnit;
	while (_squad) {
		tmp = _squad;
		tmpUnit = _squad->unit;
		_squad = _squad->next;
		delete tmpUnit;
		delete tmp;
	}
}

bool
Squad::unitAlreadyIn(ISpaceMarine *marine, t_container *squad) {
	if (!squad)
		return false;
	while (squad) {
		if (squad->unit == marine)
			return true;
		squad = squad->next;
	}
	return false;
}

Squad
&Squad::operator=(const Squad &rhs)
{
    if (this != &rhs)
    {
        destroyUnits();
        copyUnits(rhs);
       	_unitsNb = rhs.getCount();
    }
    return (*this);
}