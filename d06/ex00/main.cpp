/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:09:59 by aorji             #+#    #+#             */
/*   Updated: 2018/10/10 17:10:01 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConversion.hpp"

int main(int ac, char **av) {

	ScalarConversion conversion;

	for(int i = 1; i < ac; i++) {
		conversion.castToChar(av[i]);
		conversion.castToInt(av[i]);
		conversion.castToFloat(av[i]);
		conversion.castToDouble(av[i]);
	}
}