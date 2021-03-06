/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:04:16 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 15:04:17 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class  Form {

private:
	std::string const _name;
	std::string _target;
	int const _signGrade;
	int const _executeGrade;
	bool _isSigned;

public:
	Form( void );
	Form( std::string const name, std::string const target, int const signGrade, int const _executeGrade );
	Form( Form const & src );
	~Form( void );

	Form & operator=( Form const & rhs);

	class GradeTooHighException: public std::exception {
	public:
		GradeTooHighException( void );
		GradeTooHighException( GradeTooHighException const & src );
		~GradeTooHighException( void ) throw();
		GradeTooHighException & operator=( GradeTooHighException const & rhs);
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		GradeTooLowException( void );
		GradeTooLowException( GradeTooLowException const & src );
		~GradeTooLowException( void ) throw();
		GradeTooLowException & operator=( GradeTooLowException const & rhs);
		virtual const char* what() const throw();
	};

	class NotSignedException: public std::exception {
	public:
		NotSignedException( void );
		NotSignedException( NotSignedException const & src );
		~NotSignedException( void ) throw();
		NotSignedException & operator=( NotSignedException const & rhs);
		virtual const char* what() const throw();
	};

	std::string const getName( void ) const;
	int getSignGrade( void ) const;
	int getExecuteGrade( void ) const;
	bool getIsSigned( void ) const;
	std::string getTarget( void ) const;

	void beSigned( Bureaucrat const & bureaucrat );

	virtual void execute(Bureaucrat const & toExecutor) const;

};

std::ostream & operator<<( std::ostream & ost, Form const & src);

#endif