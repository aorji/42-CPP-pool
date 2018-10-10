/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:44:27 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 20:44:28 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	FragTrap a;
	ScavTrap b;
	NinjaTrap c;

	c.ninjaShoebox(a);
	c.ninjaShoebox(b);
	c.ninjaShoebox(c);
}