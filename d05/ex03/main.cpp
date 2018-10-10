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
#include "Intern.hpp"

int main () {
	try{
		Bureaucrat b1("b1", 20);
		Intern someRandomIntern;
		Form* rrf;
	
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf) {
			std::cout <<*rrf<< std::endl;
			rrf->beSigned(b1);
			rrf->execute(b1);
		}
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf) {
			std::cout <<*rrf<< std::endl;
			rrf->beSigned(b1);
			rrf->execute(b1);
		}
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}