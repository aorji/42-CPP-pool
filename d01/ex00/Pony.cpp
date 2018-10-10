/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:34:59 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 11:35:01 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
	this->_pony_name = "is not filled, stupid";
	this->_is_unicorn = false;
	std::cout << "Say happy birthday to new pony!!" << std::endl;
}

Pony::~Pony() {
	std::cout << "Rest in peace sweetheart pony :0" << std::endl;
}

void Pony::setPonyName(std::string name) {
	this->_pony_name = name;
	std::cout << "Ok. I have a name. Thx <3" << std::endl;
}

void Pony::setHorn() {
	this->_is_unicorn = true;
	std::cout << "Ok. I'm magical. Thx <3" << std::endl;
}

void Pony::show_info() {
	std::cout << "name: " << this->_pony_name << std::endl;
	std::cout << "is unicorn: ";
	if (_is_unicorn)
		std::cout << "YES!" << std::endl;
	else
		std::cout << "LOL NO!!" << std::endl;
}

