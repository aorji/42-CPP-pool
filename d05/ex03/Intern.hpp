/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:47:16 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 20:47:17 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern {
public:
	Intern( void );
	Intern( Intern const & src );
	~Intern( void );

	Intern & operator=( Intern const & rhs);
	Form *makeForm(std::string formName, std::string formTarget);
};

#endif