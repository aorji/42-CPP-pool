/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:26:54 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 19:26:55 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACE_MARINE_HPP
# define ISPACE_MARINE_HPP

class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif