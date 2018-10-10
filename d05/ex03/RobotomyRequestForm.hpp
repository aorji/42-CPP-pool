/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:32:02 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:32:03 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;

};

#endif