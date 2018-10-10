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

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	try {
		Bureaucrat bureaucrat_def("Kolia", 6);
		Form form_undef;
		Form form_def("diploma", 4, 15);
		Form form_copy(form_def);
	
		std::cout << form_undef;
		std::cout << form_def;
		std::cout << form_copy;
		for (int i = 0; i < 6; i++) {
			form_def.beSigned(bureaucrat_def);
			bureaucrat_def.signForm(form_def);
			bureaucrat_def.incrementGrade();
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}