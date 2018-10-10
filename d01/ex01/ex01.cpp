/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:03:06 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:03:08 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak() {

	std::string* panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere; 
}

// int main(){
// 	memoryLeak();
// 	system("leaks a.out");
// }