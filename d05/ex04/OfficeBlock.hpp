/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:36:02 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 21:36:03 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_signer;
	Bureaucrat *_executor;

public:
	OfficeBlock( void );
	OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executor);
	// OfficeBlock( OfficeBlock const & src );
	~OfficeBlock();
	
	OfficeBlock & operator=( OfficeBlock const & rhs);

	void setIntern(Intern & intern);
	void setSigner(Bureaucrat & signer);
	void setExecutor(Bureaucrat & executor);

	Intern & getIntern( void ) const;
	Bureaucrat & getSigner( void ) const;
	Bureaucrat & getExecutor( void ) const;

	void doBureaucracy(std::string formName, std::string targetName);

	class NoInternException: public std::exception  {
	public:
		NoInternException( void );
		NoInternException( NoInternException const & src );
		~NoInternException( void ) throw();
		NoInternException & operator=( NoInternException const & rhs);
		virtual const char* what() const throw();
	};
	class NoSignerException: public std::exception  {
	public:
		NoSignerException( void );
		NoSignerException( NoSignerException const & src );
		~NoSignerException( void ) throw();
		NoSignerException & operator=( NoSignerException const & rhs);
		virtual const char* what() const throw();
	};
	class NoExecutorException: public std::exception  {
	public:
		NoExecutorException( void );
		NoExecutorException( NoExecutorException const & src );
		~NoExecutorException( void ) throw();
		NoExecutorException & operator=( NoExecutorException const & rhs);
		virtual const char* what() const throw();
	};
	class IncorrectFormException: public std::exception  {
	public:
		IncorrectFormException( void );
		IncorrectFormException( IncorrectFormException const & src );
		~IncorrectFormException( void ) throw();
		IncorrectFormException & operator=( IncorrectFormException const & rhs);
		virtual const char* what() const throw();
	};

};

#endif