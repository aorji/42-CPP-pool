/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:12:43 by aorji             #+#    #+#             */
/*   Updated: 2018/10/11 13:12:44 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter( T *array, int len, void (*f)(T) ) {
	if (!array)
		return;
	for(int i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void print( T const item ) {
	std::cout << item << std::endl;
}

int main() {
	int intArr[] = {1, 2, 3};
	char charStr[] = {'h', 'e', 'l', 'l', 'o'};
	std::string str[] = { "my", "world" };

	size_t i = 3;
	unsigned int j = 5;
	long k = 2;
	iter(intArr, i, &print);
	iter(charStr, j, &print);
	iter(str, k, &print);
}