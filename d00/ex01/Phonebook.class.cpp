/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:33:40 by aorji             #+#    #+#             */
/*   Updated: 2018/10/01 10:33:51 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void Contact::add_contact(int index) {
	
	this->_index = index;

	std::cout << "first name: ";
	std::getline(std::cin, this->_first_name);

	std::cout << "last name: ";
	std::getline(std::cin, this->_last_name);

	std::cout << "nickname: ";
	std::getline(std::cin, this->_nickname);

	std::cout << "login: ";
	std::getline(std::cin, this->_login);

	std::cout << "postal address: ";
	std::getline(std::cin, this->_postal_address);

	std::cout << "email address: ";
	std::getline(std::cin, this->_email_address);

	std::cout << "phone number: ";
	std::getline(std::cin, this->_postal_address);

	std::cout << "birthday date: ";
	std::getline(std::cin, this->_birthday_date);

	std::cout << "favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);

	std::cout << "underwear color: ";
	std::getline(std::cin, this->_underwear_color);

	std::cout << "darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);

	std::cout << "\033[32mContact successfully added!\033[0m" << std::endl;
	
	return;
}

void Contact::print_contact_with_COLOMNLEN(std::string str) {

	if (str.length() <= 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str.substr(0, 9) << ".|";
}

void Contact::show_short_contact_info() {
	
	std::cout << "|" << "         " << this->_index << "|";
	print_contact_with_COLOMNLEN(this->_first_name);
	print_contact_with_COLOMNLEN(this->_last_name);
	print_contact_with_COLOMNLEN(this->_nickname);
	std::cout << std::endl;
}

void Contact::show_full_contact_info() {

	std::cout << "index: " << this->_index<< std::endl;
	std::cout << "first name: " << this->_first_name<< std::endl;
	std::cout << "last name: " << this->_last_name<< std::endl;
	std::cout << "nickname: " << this->_nickname<< std::endl;
	std::cout << "login: " << this->_login<< std::endl;
	std::cout << "postal_address: " << this->_postal_address<< std::endl;
	std::cout << "email address: " << this->_email_address<< std::endl;
	std::cout << "phone number: " << this->_phone_number<< std::endl;
	std::cout << "birthday date: " << this->_birthday_date<< std::endl;
	std::cout << "favorite meal: " << this->_favorite_meal<< std::endl;
	std::cout << "underwear color: " << this->_underwear_color<< std::endl;
	std::cout << "darkest secret: " << this->_darkest_secret<< std::endl;
}