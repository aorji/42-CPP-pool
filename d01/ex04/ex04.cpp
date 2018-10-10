/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:14:14 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 12:14:36 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";

	std::string* ptrStr = &str;
	std::string& refStr = str;

	std::cout << *ptrStr << std::endl;
	std::cout << refStr << std::endl;
	return (0);
}
