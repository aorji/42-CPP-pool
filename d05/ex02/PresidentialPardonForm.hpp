/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:32:18 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:32:19 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;

};
#endif