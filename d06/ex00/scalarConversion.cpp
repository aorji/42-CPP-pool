/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:43:58 by aorji             #+#    #+#             */
/*   Updated: 2018/10/10 17:43:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConversion.hpp"
#include <iomanip>

ScalarConversion::ScalarConversion( void ) {}

ScalarConversion::ScalarConversion( ScalarConversion const & src ) { *this = src; }

ScalarConversion::~ScalarConversion( void ) {}

ScalarConversion & 
ScalarConversion::operator=( ScalarConversion const & rhs) { (void)rhs; return *this; }
//////////

void
ScalarConversion::castToChar(char *input) {
	std::cout << "char: ";

	try {
		int c = std::stoi(input);
		if (c < 0 || c > 255)
			throw ScalarConversion::ImpossibleException();
		if (std::isprint(static_cast<char>(c)))
			std::cout << "\'" << static_cast<char>(c) << "\'" << std::endl;
		else
			throw ScalarConversion::NonDisplayableException();
	}
	catch (std::exception &e) {
		if (!std::strncmp(e.what(), "stoi", 4))
			std::cout << "impossible" << std::endl;
		else
			std::cout << e.what() << std::endl;
	}
}

void
ScalarConversion::castToInt(char *input) {
	std::cout << "int: ";

	try {
		int n = std::stoi(input);
		std::cout << n << std::endl;
	}
	catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
	}
}

void
ScalarConversion::castToFloat(char *input) {
	try {
		std::cout << "float: ";
		float n = std::stof(input);
		std::cout << std::fixed << std::setprecision(getPrecision(input)) << n << "f" << std::endl;
	} catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
}

void
ScalarConversion::castToDouble(char *input) {
	try {
		std::cout << "double: ";
		double n = std::stod(input);
		std::cout << std::fixed << std::setprecision(getPrecision(input)) << n << std::endl;
	} catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
}

int
ScalarConversion::getPrecision( char * input ) {
	int p = 0;
	while (*input && *input != '.')
		input++;
	input++;
	while (*input && isdigit(*input)) {
		p++;
		input++;
	}
	return (p == 0 ? 1 : p);

}


//////
ScalarConversion::
NonDisplayableException::NonDisplayableException ( void ) {}

ScalarConversion::
NonDisplayableException::NonDisplayableException ( ScalarConversion::NonDisplayableException const & src ) {
	*this = src;
}

ScalarConversion::
NonDisplayableException::~NonDisplayableException ( void ) throw() {}

ScalarConversion::NonDisplayableException & 
ScalarConversion::NonDisplayableException::operator=( ScalarConversion::NonDisplayableException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
ScalarConversion::NonDisplayableException::what() const throw()
{
    return ("Non displayable");
}

ScalarConversion::
ImpossibleException::ImpossibleException ( void ) {}

ScalarConversion::
ImpossibleException::ImpossibleException ( ScalarConversion::ImpossibleException const & src ) {
	*this = src;
}

ScalarConversion::
ImpossibleException::~ImpossibleException ( void ) throw() {}

ScalarConversion::ImpossibleException & 
ScalarConversion::ImpossibleException::operator=( ScalarConversion::ImpossibleException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
ScalarConversion::ImpossibleException::what() const throw()
{
    return ("impossible");
}