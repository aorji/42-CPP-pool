/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:59:13 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 12:59:14 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	ShrubberyCreationForm s("ShrubberyCreationForm");
	RobotomyRequestForm r("RobotomyRequestForm");
	PresidentialPardonForm p("PresidentialPardonFormp");



	try {
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 100);
		std::cout <<"-----------------" << std::endl;
		s.beSigned(b1);
		s.execute(b1);
		std::cout <<"-----------------" << std::endl;
		s.beSigned(b2);
		s.execute(b2);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b1);
		r.execute(b1);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b2);
		r.execute(b2);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b1);
		p.execute(b1);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b2);
		p.execute(b2);


		
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}