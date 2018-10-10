/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:31:58 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:31:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", "undefined", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Form("RobotomyRequestForm", name, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs) {
	(void)rhs;
	return *this;
}

void
RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	Form::execute(executor);
	srand ( time(NULL) );
	std::cout << "* some drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << "<" << getTarget() << "> has been robotomized successfully." << std::endl;
	else
		std::cout << "<" << getTarget() << "> robotomized is failure." << std::endl;
}