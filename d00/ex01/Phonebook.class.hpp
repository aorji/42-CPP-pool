/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:34:47 by aorji             #+#    #+#             */
/*   Updated: 2018/10/01 10:34:48 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#define MAX_CONTACT 8
#define COLOMN_LEN 10

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Contact {
private:
	int _index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

public:
	Contact();
	~Contact();

	void add_contact(int index);
	void show_short_contact_info();
	void show_full_contact_info();

private:
	static void print_contact_with_COLOMNLEN(std::string str);

};

#endif
