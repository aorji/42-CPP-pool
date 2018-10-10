/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:47:12 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 20:47:13 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & src ) {
	*this = src;
}

Intern::~Intern( void ) {}

Intern & 
Intern::operator=( Intern const & rhs) {
	(void)rhs;
	return *this;
}

Form *
Intern::makeForm(std::string formName, std::string formTarget) {

	if (formName == "shrubbery creation") {
		std::cout << "Intern creates <" << formName << ">" << std::endl;
		return (new ShrubberyCreationForm(formTarget));
	}
	else if (formName == "robotomy request") {
		std::cout << "Intern creates <" << formName << ">" << std::endl;
		return (new RobotomyRequestForm(formTarget));
	}
	else if (formName == "presidential pardon") {
		std::cout << "Intern creates <" << formName << ">" << std::endl;
		return (new PresidentialPardonForm(formTarget));
	}
	else
		std::cout << "Error: this form does not exist." << std::endl;
	return NULL;
}