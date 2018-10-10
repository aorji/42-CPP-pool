/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:51:10 by aorji             #+#    #+#             */
/*   Updated: 2018/10/05 17:51:14 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name ) {
	std::cout << "NinjaTrap constructor called" << std::endl;
	setName(name);
	setHitPoints(60);
	setMaxHitPoints(600);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap( void ) {
	std::cout << "NinjaTrap default constructor called" << std::endl;
	setName("default name");
	setHitPoints(60);
	setMaxHitPoints(600);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap( NinjaTrap const & src) {
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "\033[41m<Game over!>\033[0m" << std::endl;
	std::cout << "NinjaTrap destructor called" << std::endl;
}
//
//	attacks
//
void
NinjaTrap::rangedAttack( std::string const & target ) {
	std::cout << "<NinjaTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getRangedAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
NinjaTrap::meleeAttack( std::string const & target ) {
	std::cout << "<NinjaTrap> <" << getName() << "> attacks <" << target;
	std::cout << "> at range, causing <" << (getMeleeAttackDamage()) << "> points of damage !";
	std::cout << std::endl;
}

void
NinjaTrap::ninjaShoebox(NinjaTrap &attack) {
std::cout << "Loser: " << attack.getName();
std::cout << std::endl;
std::cout << " .-----------------. .----------------.  .-----------------. .----------------.  .----------------. " << std::endl;
std::cout << "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |" << std::endl;
std::cout << "| | ____  _____  | || |     _____    | || | ____  _____  | || |     _____    | || |      __      | |" << std::endl;
std::cout << "| ||_   \\|_   _| | || |    |_   _|   | || ||_   \\|_   _| | || |    |_   _|   | || |     /  \\     | |" << std::endl;
std::cout << "| |  |   \\ | |   | || |      | |     | || |  |   \\ | |   | || |      | |     | || |    / /\\ \\    | |" << std::endl;
std::cout << "| |  | |\\ \\| |   | || |      | |     | || |  | |\\ \\| |   | || |   _  | |     | || |   / ____ \\   | |" << std::endl;
std::cout << "| | _| |_\\   |_  | || |     _| |_    | || | _| |_\\   |_  | || |  | |_' |     | || | _/ /    \\ \\_ | |" << std::endl;
std::cout << "| ||_____|\\____| | || |    |_____|   | || ||_____|\\____| | || |  `.___.'     | || ||____|  |____|| |" << std::endl;
std::cout << "| |              | || |              | || |              | || |              | || |              | |" << std::endl;
std::cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |" << std::endl;
std::cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------' " << std::endl;
}

void
NinjaTrap::ninjaShoebox(FragTrap &attack) {
std::cout << "Loser: " << attack.getName();
std::cout << std::endl;
std::cout << "	         																		        " << std::endl;  
std::cout << "         /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         " << std::endl;
std::cout << "        /::\\    \\                /::\\    \\                /::\\    \\                /::\\    \\        " << std::endl;
std::cout << "       /::::\\    \\              /::::\\    \\              /::::\\    \\              /::::\\    \\       " << std::endl;
std::cout << "      /::::::\\    \\            /::::::\\    \\            /::::::\\    \\            /::::::\\    \\      " << std::endl;
std::cout << "     /:::/\\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\     " << std::endl;
std::cout << "    /:::/__\\:::\\    \\        /:::/__\\:::\\    \\        /:::/__\\:::\\    \\        /:::/  \\:::\\    \\    " << std::endl;
std::cout << "   /::::\\   \\:::\\    \\      /::::\\   \\:::\\    \\      /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\   " << std::endl;
std::cout << "  /::::::\\   \\:::\\    \\    /::::::\\   \\:::\\    \\    /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\  " << std::endl;
std::cout << " /:::/\\:::\\   \\:::\\    \\  /:::/\\:::\\   \\:::\\____\\  /:::/\\:::\\   \\:::\\    \\  /:::/    /   \\:::\\ ___\\ " << std::endl;
std::cout << "/:::/  \\:::\\   \\:::\\____\\/:::/  \\:::\\   \\:::|    |/:::/  \\:::\\   \\:::\\____\\/:::/____/  ___\\:::|    |" << std::endl;
std::cout << "\\::/    \\:::\\   \\::/    /\\::/   |::::\\  /:::|____|\\::/    \\:::\\  /:::/    /\\:::\\    \\ /\\  /:::|____|" << std::endl;
std::cout << " \\/____/ \\:::\\   \\/____/  \\/____|:::::\\/:::/    /  \\/____/ \\:::\\/:::/    /  \\:::\\    /::\\ \\::/    / " << std::endl;
std::cout << "          \\:::\\    \\            |:::::::::/    /            \\::::::/    /    \\:::\\   \\:::\\ \\/____/  " << std::endl;
std::cout << "           \\:::\\____\\           |::|\\::::/    /              \\::::/    /      \\:::\\   \\:::\\____\\    " << std::endl;
std::cout << "            \\::/    /           |::| \\::/____/               /:::/    /        \\:::\\  /:::/    /    " << std::endl;
std::cout << "             \\/____/            |::|  ~|                    /:::/    /          \\:::\\/:::/    /     " << std::endl;
std::cout << "                                |::|   |                   /:::/    /            \\::::::/    /      " << std::endl;
std::cout << "                                \\::|   |                  /:::/    /              \\::::/    /       " << std::endl;
std::cout << "                                 \\:|   |                  \\::/    /                \\::/____/        " << std::endl;
std::cout << "                                  \\|___|                   \\/____/                                  " << std::endl;
                                                                                                    
}

void
NinjaTrap::ninjaShoebox(ScavTrap &attack) {
std::cout << "Loser: " << attack.getName();
std::cout << std::endl;
std::cout << "				 " << std::endl;  
std::cout << "  (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)  " << std::endl;
std::cout << "   / ._. \\      / ._. \\      / ._. \\      / ._. \\   " << std::endl;
std::cout << " __\\( Y )/__  __\\( Y )/__  __\\( Y )/__  __\\( Y )/__ " << std::endl;
std::cout << "(_.-/'-'\\-._)(_.-/'-'\\-._)(_.-/'-'\\-._)(_.-/'-'\\-._)" << std::endl;
std::cout << "   || S ||      || C ||      || A ||      || V ||   " << std::endl;
std::cout << " _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._ " << std::endl;
std::cout << "(.-./`-`\\.-.)(.-./`-'\\.-.)(.-./`-'\\.-.)(.-./`-'\\.-.)" << std::endl;
std::cout << " `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-' " << std::endl;
	
}

NinjaTrap
&NinjaTrap::operator=( NinjaTrap const & rhs) {
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setMaxHitPoints(rhs.getMaxHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setMaxEnergyPoints(rhs.getMaxEnergyPoints());
		setLevel(rhs.getLevel());
		setMeleeAttackDamage(rhs.getMeleeAttackDamage());
		setRangedAttackDamage(rhs.getRangedAttackDamage());
		setArmorDamageReduction(rhs.getArmorDamageReduction());
	}
	return *this;
}
