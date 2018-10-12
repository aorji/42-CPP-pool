/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:36:47 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 12:36:49 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(100);
	vec.push_back(15);
	vec.push_back(-10);

	try {
		easyfind(vec, 15); 		
		easyfind(vec, 20); 
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
