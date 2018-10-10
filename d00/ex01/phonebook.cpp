/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:35:19 by aorji             #+#    #+#             */
/*   Updated: 2018/10/01 10:35:21 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void search_command(int contact_number, Contact *phonebook) {
	
	std::string from_user;
	std::stringstream ss;
	int index = 0;

	if (contact_number < 0)
		std::cout << "\033[31mPhonebook is empty :0\033[0m" << std::endl;
	else {
		if (contact_number >= MAX_CONTACT)
			contact_number = MAX_CONTACT - 1;
		for (int i = 0; i <= contact_number; i++) {
			(!i) ? std::cout << "\033[32m|     index|first name| last name|  nickname|\033[0m" << std::endl : 0;
			phonebook[i].show_short_contact_info();
		}
		std::cout << "\033[32mChoose index!\033[0m" << std::endl;
		std::getline(std::cin, from_user);
		ss << from_user;
		ss >> index;
		if ((index > 0 && index <= contact_number) || (!index && from_user == "0"))
			phonebook[index].show_full_contact_info();
		else 
			std::cout << "\033[31mIndex is incorrect!\033[0m" << std::endl;
	}
}

void present_instructions() {

	std::cout << "	\033[32mWelcome to your phonebook!\033[0m" << std::endl;
	std::cout << "There are several commands available for you:" << std::endl;
	std::cout << "\033[33mADD\033[0m - to input a new contact’s informations" << std::endl;
	std::cout << "\033[33mSEARCH\033[0m - to display a list of the available contacts" << std::endl;
	std::cout << "\033[33mEXIT\033[0m - to quit" << std::endl;
}

int main() {
	
	present_instructions();
	Contact phonebook[MAX_CONTACT];
	std::string command;
	int contact_number = -1;
	
	while (1) {
		std::cout << "(ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD") {
			contact_number++;
			if (contact_number >= MAX_CONTACT)
				std::cout << "\033[31mNo space for a new contact. Sorry!\033[0m"<< std::endl;
			else 
				phonebook[contact_number].add_contact(contact_number);
		}
		else if (command == "SEARCH")
			search_command(contact_number, phonebook);
		else if (command == "EXIT")
			break;
	}
	return (0);
}