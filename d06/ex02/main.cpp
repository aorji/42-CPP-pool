/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:41:30 by aorji             #+#    #+#             */
/*   Updated: 2018/10/10 19:41:30 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <iostream>

class Base {
public:
	virtual ~Base(){}
};

class A: public Base {
	~A() {}
};
class B: public Base {
	~B() {}
};
class C: public Base {
	~C() {}
};

Base * generate(void) {
	int i = rand()%3;

	if (i == 0) {
		std::cout << "generate class A" << std::endl;
		return new A;
	}
	if (i == 1) {
		std::cout << "generate class B" << std::endl;
		return new B;
	}
	if (i == 2) {
		std::cout << "generate class C" << std::endl;
		return new C;
	}
	return NULL;
}

void identify_from_pointer( Base * p ) {
 	A *typeA = dynamic_cast<A *>(p);
 	B *typeB = dynamic_cast<B *>(p);
 	C *typeC = dynamic_cast<C *>(p);

 	if (typeA)
		std::cout << "type A" << std::endl;
	if (typeB)
		std::cout << "type B" << std::endl;
	if (typeC)
		std::cout << "type C" << std::endl;

}

void identify_from_reference( Base & p ) {
try {
		A &type = dynamic_cast<A &>(p);
		std::cout << "type A" << std::endl;
	} catch (std::exception &e){}
	try {
		B &type = dynamic_cast<B &>(p);
		std::cout << "type B" << std::endl;
	} catch (std::exception &e){}
	try {
		C &type = dynamic_cast<C &>(p);
		std::cout << "type C" << std::endl;
	} catch (std::exception &e){}
}

int main() {
	srand ( time(NULL) );

	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
}