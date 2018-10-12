/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:14:04 by aorji             #+#    #+#             */
/*   Updated: 2018/10/12 19:14:05 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <string>
#include <iostream>
#include <stack>
int main()
{
	MutantStack<int> mstack;

	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top = " << mstack.top() << std::endl;
	
	mstack.pop(); //removes the top element 
	
	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "*it = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}