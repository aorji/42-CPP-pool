/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:44:52 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 16:44:53 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
	Human human;

	human.action("meleeAttack", "someone really bad");
	human.action("rangedAttack", "someone bad");
	human.action("intimidatingShout", "someone good");
}