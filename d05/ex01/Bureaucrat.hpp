/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:59:07 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 12:59:08 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {

private: 
	std::string const _name;
	int _grade; //1-150

public:
	Bureaucrat( void );
	Bureaucrat( std::string const name, int grade );
	Bureaucrat( Bureaucrat const & src) ;
	~Bureaucrat( void );

	class GradeTooHighException: public std::exception  {
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

	std::string const getName ( void ) const;
	int getGrade( void ) const;

	void incrementGrade( void );
	void decrementGrade( void );

	void signForm( Form form );

	Bureaucrat & operator=( Bureaucrat const & rhs);
};

std::ostream & operator<<( std::ostream & ost, Bureaucrat const & src);

#endif