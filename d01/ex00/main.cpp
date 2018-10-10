/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:35:12 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 11:35:13 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void present_instructions() {

	std::cout << "There are several commands available for you:" << std::endl;
	std::cout << "\033[33mSET_NAME\033[0m - to input a pony name" << std::endl;
	std::cout << "\033[33mCHECK_INFO\033[0m - to display info about pony" << std::endl;
	std::cout << "\033[33mADD_HORN\033[0m - to create a unicorn" << std::endl;
	std::cout << "\033[33mEXIT\033[0m - to quit" << std::endl;
}

void runStackPonycreator() {

	std::string command;
	std::string name;
	Pony stackPony = Pony();
	
	present_instructions();
	while (1) {
		std::cout << "(SET_NAME, CHECK_INFO, ADD_HORN, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "SET_NAME") {
			std::cout << "which one? ";
			if (!std::getline(std::cin, name))
				break;
			stackPony.setPonyName(name);
		}
		else if (command == "CHECK_INFO")
			stackPony.show_info();
		else if (command == "ADD_HORN")
			stackPony.setHorn();
		else if (command == "EXIT")
			break;
	}
}

void runHeapPonycreator() {

	std::string command;
	std::string name;
	Pony* heapPony = new Pony();
	
	present_instructions();
	while (1) {
		std::cout << "(SET_NAME, CHECK_INFO, ADD_HORN, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "SET_NAME") {
			std::cout << "which one? ";
			if (!std::getline(std::cin, name))
				break;
			heapPony->setPonyName(name);
		}
		else if (command == "CHECK_INFO")
			heapPony->show_info();
		else if (command == "ADD_HORN")
			heapPony->setHorn();
		else if (command == "EXIT")
			break;
	}
	delete heapPony;
}

int main() {

	std::string sh;

	std::cout << "	\033[32mWelcome to your PONY creator!\033[0m" << std::endl;
	std::cout << "Stack, or Heap? (s/h) ";
	if (!std::getline(std::cin, sh))
		return (0);
	if (sh == "s")
		runStackPonycreator();
	else if (sh == "h")
		runHeapPonycreator();
	else
		std::cout << "you suck" << std::endl;
	return (0);
}
