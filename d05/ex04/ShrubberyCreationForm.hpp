/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:31:45 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:31:47 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form {

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
	int validateFile(const char *path) const;

};

#endif