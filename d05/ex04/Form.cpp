/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:04:11 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 15:04:13 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form( void ): _name("undefined"), _target("undefined"), _signGrade(25), _executeGrade(25), _isSigned(false) {
	if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
}


Form::Form( std::string name,std::string const target, int const signGrade, int const executeGrade):
_name(name), \
_target(target),\
_signGrade(signGrade), \
_executeGrade(executeGrade), \
_isSigned(false) {
	if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form( Form const & src ): _name(src.getName()), _signGrade(src.getSignGrade()),\
						 _executeGrade(src.getExecuteGrade()), _isSigned(false) {
	*this = src;
}

Form::~Form( void ) {}

std::string const
Form::getName( void ) const { return _name; }

int
Form::getSignGrade( void ) const { return _signGrade; }

int
Form::getExecuteGrade( void ) const { return _executeGrade; }

bool
Form::getIsSigned( void ) const { return _isSigned; }

std::string
Form::getTarget( void ) const { return _target; }

void
Form::beSigned( Bureaucrat const & bureaucrat ) {
	bureaucrat.signForm(*this);
	if (_signGrade >= bureaucrat.getGrade())
		_isSigned = true;
}

Form & 
Form::operator=( Form const & rhs) {
	if (this != &rhs)
		this->_isSigned = rhs.getIsSigned();
	return *this;
}

std::ostream & operator<<( std::ostream & ost, Form const & src) {
	if (src.getIsSigned())
		ost << "<" << src.getName() << "> is signed." << std:: endl;
	else
		ost << "<" << src.getName() << "> is not signed." << std:: endl;
	return ost;
}

void
Form::execute(const Bureaucrat & executor) const {
	if (executor.getGrade() > _executeGrade) {
		throw Form::GradeTooLowException();
	}
	if (!_isSigned) {
		throw Form::NotSignedException();
	}
}

Form::
GradeTooHighException::GradeTooHighException ( void ) {}

Form::
GradeTooHighException::GradeTooHighException ( Form::GradeTooHighException const & src ) {
	*this = src;
}

Form::
GradeTooHighException::~GradeTooHighException ( void ) throw() {}

Form::GradeTooHighException & 
Form::GradeTooHighException::operator=( Form::GradeTooHighException const & rhs) {
	(void)rhs;
	return *this;
}

Form::
GradeTooLowException::GradeTooLowException ( void ) {}

Form::
GradeTooLowException::GradeTooLowException ( Form::GradeTooLowException const & src ) {
	*this = src;
}

Form::
GradeTooLowException::~GradeTooLowException ( void ) throw() {}

Form::GradeTooLowException & 
Form::GradeTooLowException::operator=( Form::GradeTooLowException const & rhs) {
	(void)rhs;
	return *this;
}

Form::
NotSignedException::NotSignedException ( void ) {}

Form::
NotSignedException::NotSignedException ( Form::NotSignedException const & src ) {
	*this = src;
}

Form::
NotSignedException::~NotSignedException ( void ) throw() {}

Form::NotSignedException & 
Form::NotSignedException::operator=( Form::NotSignedException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
Form::GradeTooLowException::what() const throw()
{
    return ("Sign grade is too low!");
}

const char *
Form::GradeTooHighException::what() const throw()
{
    return ("Sign grade is too high!");
}

const char *
Form::NotSignedException::what() const throw()
{
    return ("Form is unsigned!");
}
