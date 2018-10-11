/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:38:20 by aorji             #+#    #+#             */
/*   Updated: 2018/10/11 14:38:20 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>
#include <ctime>

int main() {

	srand ( time(NULL) );

	int n = rand()%5;
	
	std::cout << "numb of elem = "<< n << std::endl;
	Array<int> arr(n);
	for (int i = 0; i < n; ++i)
		arr[i] = rand()%24;

	for (int i = 0; i < n; ++i)
		std::cout << arr[i] << std::endl;

	try {
		std::cout << arr[100] << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	////////////////////

	Array<int> arr2(arr);
	for (int i = 0; i < n; ++i)
		std::cout << arr2[i] << std::endl;

	///////////////////
	Array<float> arr3(n);
	for (int i = 0; i < n; ++i)
		arr3[i] = 34.765;

	for (int i = 0; i < n; ++i)
		std::cout << arr3[i] << std::endl;
	// system("leaks array");
}
