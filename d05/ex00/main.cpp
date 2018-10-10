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

int main () {

	Bureaucrat bureaucrat_undef;
	Bureaucrat bureaucrat_copy(bureaucrat_undef);

	std::cout << bureaucrat_undef;
	std::cout << bureaucrat_copy;
	try {
		Bureaucrat bureaucrat_def("Kolia", 5);
		for (int i = 0; i < 100; i++){
			std::cout << bureaucrat_def;
			bureaucrat_def.incrementGrade();
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}