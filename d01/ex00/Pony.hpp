/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:35:06 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 11:35:08 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony {

private:
	std::string _pony_name;
	bool _is_unicorn;

public:
	Pony();
	~Pony();

	void setPonyName(std::string name);
	void setHorn();
	void show_info();
};

#endif