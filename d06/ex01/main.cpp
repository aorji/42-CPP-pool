/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:13:57 by aorji             #+#    #+#             */
/*   Updated: 2018/10/10 19:13:58 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void * serialize( void ) {
	
	Data *data = new Data;

	int i = 0;
	data->n = rand() % 2147483647;
	while (i < 8) {
		data->s1 += (97 + rand() % 26);
		data->s2 += (97 + rand() % 26);
		i++;
	}
	std::cout << "\033[32mSerialize:\033[0m" << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << data->n << std::endl;
	return data;
}

Data * deserialize( void * raw ) {
	Data *data = reinterpret_cast<Data *>(raw);
	std::cout << "\033[32mDeserialize:\033[0m" << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << data->n << std::endl;
	return data;
}

int main () {

	srand ( time(NULL) );

	void *s = serialize();
	Data *d = deserialize( s );
	std::cout << "\033[32mReturn:\033[0m" << std::endl;
	std::cout << d->s1 << std::endl;
	std::cout << d->s2 << std::endl;
	std::cout << d->n << std::endl;
	return 0;
}