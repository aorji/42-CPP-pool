/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:59:13 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 12:59:14 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 10);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 10);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("shrubbery creation", "Pigley");
	}
	catch (OfficeBlock::NoInternException & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecutorException & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::IncorrectFormException & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}