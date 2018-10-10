/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:57:30 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:57:35 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <sstream>

Human::Human() {
	return;
}

Human::~Human() {
	return;
}

std::string Human::identify() const {
	return this->brain.identify();
}

Brain const & Human::getBrain() const {
	return this->brain;
}
