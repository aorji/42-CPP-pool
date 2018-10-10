/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:44:02 by aorji             #+#    #+#             */
/*   Updated: 2018/10/10 17:44:02 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

#include <string>
#include <iostream>

class ScalarConversion
{
public:
	ScalarConversion();
	ScalarConversion( ScalarConversion const & src);
	~ScalarConversion();

	void castToChar(char *input);
	void castToInt(char *input);
	void castToFloat(char *input);
	void castToDouble(char *input);

	int getPrecision( char * input );
	
	class  NonDisplayableException: public std::exception {
	public:
		NonDisplayableException( void );
		NonDisplayableException( NonDisplayableException const & src );
		~NonDisplayableException( void ) throw();
		NonDisplayableException & operator=( NonDisplayableException const & rhs);
		virtual const char* what() const throw();
	};
	class  ImpossibleException: public std::exception {
	public:
		ImpossibleException( void );
		ImpossibleException( ImpossibleException const & src );
		~ImpossibleException( void ) throw();
		ImpossibleException & operator=( ImpossibleException const & rhs);
		virtual const char* what() const throw();
	};

	ScalarConversion & operator=( ScalarConversion const & rhs);
};

#endif