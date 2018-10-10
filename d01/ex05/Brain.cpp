/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:57:01 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:57:08 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain () {
	return;
}

Brain::~Brain () {
	return;
}

std::string Brain::identify() const{
	std::stringstream ss;

	ss << this;
	return ss.str();
}
