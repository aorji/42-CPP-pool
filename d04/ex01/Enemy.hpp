/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:22:25 by aorji             #+#    #+#             */
/*   Updated: 2018/10/06 16:22:26 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {

private:
	int _HP;
	std::string _type;

public:
	Enemy(int hp, std::string const & type);
	Enemy( void );
	Enemy( Enemy const & src );
	virtual ~Enemy();
	
	std::string const getType() const;
	int getHP() const;

	void setHP(int hp);
	void setType(std::string const type);
	
	virtual void takeDamage(int damage);
	
	Enemy & operator=( Enemy const & rhs);
};

#endif