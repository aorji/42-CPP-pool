/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:45:09 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 16:45:11 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void
Human::meleeAttack(std::string const & target) {
	std::cout << "Melee attack at " << target << std::endl;
}

void
Human::rangedAttack(std::string const & target) {
	std::cout << "Ranged attack at " << target << std::endl;
}

void
Human::intimidatingShout(std::string const & target) {
	std::cout << "Intimidating shout at " << target << std::endl;
}

void
Human::action(std::string const & action_name, std::string const & target) {
	
	int i = 0;

	void (Human::*ptr[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	std::string availableAction[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	while (i < 3 ) {
		if (availableAction[i] == action_name) {
			(this->*ptr[i])(target);
			break;
		}
		i++;
	}
	return ;
}