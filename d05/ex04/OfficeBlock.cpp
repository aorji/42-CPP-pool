/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:35:58 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 21:35:59 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock( void ) {}

// OfficeBlock::OfficeBlock(OfficeBlock const & src) {
// 	*this = src;
// }

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executor) {
	setIntern(intern);
	setSigner(signer);
	setExecutor(executor);
}

OfficeBlock::~OfficeBlock( void ){}

void
OfficeBlock::setIntern(Intern & intern) { _intern = &intern; }

void
OfficeBlock::setSigner(Bureaucrat & signer) { _signer = &signer; }

void
OfficeBlock::setExecutor(Bureaucrat & executor) { _executor = &executor; }

Intern &
OfficeBlock::getIntern( void ) const { return *_intern; }
Bureaucrat &
OfficeBlock::getSigner( void ) const { return *_signer; }
Bureaucrat &
OfficeBlock::getExecutor( void ) const { return *_executor; }

OfficeBlock &
OfficeBlock::operator=( OfficeBlock const & rhs) {
	if (this != &rhs) {
		setExecutor(rhs.getExecutor());
		setSigner(rhs.getSigner());
		setIntern(rhs.getIntern());
	}
	return *this;
}

void
OfficeBlock::doBureaucracy(std::string formName, std::string targetName) {
	Form *form = NULL;
	if (!_intern) {
		throw OfficeBlock::NoInternException();
	}
	if (!_signer)
		throw OfficeBlock::NoSignerException();
	if (!_executor)
		throw OfficeBlock::NoExecutorException();
	form = _intern->makeForm(formName, targetName);
	if (!form)
		throw OfficeBlock::IncorrectFormException();
	form->beSigned(*_signer);
	form->execute(*_executor);
}

OfficeBlock::
IncorrectFormException::IncorrectFormException ( void ) {}

OfficeBlock::
IncorrectFormException::IncorrectFormException ( OfficeBlock::IncorrectFormException const & src ) {
	*this = src;
}

OfficeBlock::
IncorrectFormException::~IncorrectFormException ( void ) throw() {}

OfficeBlock::IncorrectFormException & 
OfficeBlock::IncorrectFormException::operator=( OfficeBlock::IncorrectFormException const & rhs) {
	(void)rhs;
	return *this;
}

OfficeBlock::
NoInternException::NoInternException ( void ) {}

OfficeBlock::
NoInternException::NoInternException ( OfficeBlock::NoInternException const & src ) {
	*this = src;
}

OfficeBlock::
NoInternException::~NoInternException ( void ) throw() {}

OfficeBlock::NoInternException & 
OfficeBlock::NoInternException::operator=( OfficeBlock::NoInternException const & rhs) {
	(void)rhs;
	return *this;
}

OfficeBlock::
NoSignerException::NoSignerException ( void ) {}

OfficeBlock::
NoSignerException::NoSignerException ( OfficeBlock::NoSignerException const & src ) {
	*this = src;
}

OfficeBlock::
NoSignerException::~NoSignerException ( void ) throw() {}

OfficeBlock::NoSignerException & 
OfficeBlock::NoSignerException::operator=( OfficeBlock::NoSignerException const & rhs) {
	(void)rhs;
	return *this;
}

OfficeBlock::
NoExecutorException::NoExecutorException ( void ) {}

OfficeBlock::
NoExecutorException::NoExecutorException ( OfficeBlock::NoExecutorException const & src ) {
	*this = src;
}

OfficeBlock::
NoExecutorException::~NoExecutorException ( void ) throw() {}

OfficeBlock::NoExecutorException & 
OfficeBlock::NoExecutorException::operator=( OfficeBlock::NoExecutorException const & rhs) {
	(void)rhs;
	return *this;
}

const char *
OfficeBlock::NoExecutorException::what() const throw()
{
    return ("No executor!");
}
const char *
OfficeBlock::NoSignerException::what() const throw()
{
    return ("No signer!");
}
const char *
OfficeBlock::NoInternException::what() const throw()
{
    return ("No intern!");
}
const char *
OfficeBlock::IncorrectFormException::what() const throw()
{
    return ("Incorrect form name!");
}

