/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:59:01 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 12:59:03 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("undefined"), _grade(150) {}

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name), _grade(grade) {
	if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ): _name(src.getName()) {
	*this = src;
}

Bureaucrat::~Bureaucrat( void ) {}

std::string const
Bureaucrat::getName ( void ) const { return _name; }

int
Bureaucrat::getGrade( void ) const { return _grade; }

void Bureaucrat::incrementGrade( void ) {
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void
Bureaucrat::decrementGrade( void ) {
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void
Bureaucrat::signForm( Form const & form ) const {
	if (form.getSignGrade() >= _grade)
		std::cout << "<" << getName() <<"> signs <" << form.getName()<< ">" << std:: endl;
	else {
		std::cout << "<" << getName() << "> cannot sign <" << form.getName();
		std::cout << "> because <signGrade is to low>" << std::endl;
	}
}

Bureaucrat &
Bureaucrat::operator=( Bureaucrat const & rhs) {
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

void
Bureaucrat::executeForm(Form const & form) const{
	if (form.getExecuteGrade() > _grade)
		std::cout << "<" << _name << "> executes <" << form.getName() << ">." << std::endl;
	else {
		std::cout << "<" << getName() << "> cannot execute <" << form.getName();
		std::cout << "> because <executeGrade is to low>" << std::endl;
	}

}

Bureaucrat::
GradeTooHighException::GradeTooHighException ( void ) {}

Bureaucrat::
GradeTooHighException::GradeTooHighException ( Bureaucrat::GradeTooHighException const & src ) {
	*this = src;
}

Bureaucrat::
GradeTooHighException::~GradeTooHighException ( void ) throw() {}

Bureaucrat::GradeTooHighException & 
Bureaucrat::GradeTooHighException::operator=( Bureaucrat::GradeTooHighException const & rhs) {
	(void)rhs;
	return *this;
}

Bureaucrat::
GradeTooLowException::GradeTooLowException ( void ) {}

Bureaucrat::
GradeTooLowException::GradeTooLowException ( Bureaucrat::GradeTooLowException const & src ) {
	*this = src;
}

Bureaucrat::
GradeTooLowException::~GradeTooLowException ( void ) throw() {}

Bureaucrat::GradeTooLowException & 
Bureaucrat::GradeTooLowException::operator=( Bureaucrat::GradeTooLowException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char *
Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

std::ostream &
operator<<( std::ostream & ost, Bureaucrat const & src) {
	ost << "<" << src.getName() <<">, bureaucrat grade <";
	ost << src.getGrade() <<">."<< std::endl;
	return ost;
}
