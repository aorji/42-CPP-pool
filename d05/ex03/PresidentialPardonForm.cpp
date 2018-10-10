/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:32:12 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:32:14 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", "undefined", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Form("PresidentialPardonForm", name, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs) {
	(void)rhs;
	return *this;
}

void
PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	Form::execute(executor);
	std::cout << "<" << getTarget() <<"> has been pardoned by Zaphod Beeblebrox" << std::endl;
}