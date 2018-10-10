/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:30:49 by aorji             #+#    #+#             */
/*   Updated: 2018/10/01 10:30:51 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void megaphone(char *str) {
	
	char c;

	while (*str) {
		if (*str >= 'a' && *str <= 'z') {
			c = *str - 32;
		} else {
			c = *str;
		}
		std::cout << c;
		str++;
	}
}

int main(int ac, char **av) {

	if (ac > 1) {
		for (int i = 1; av[i]; i++) {
			megaphone(av[i]);
		}
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}
