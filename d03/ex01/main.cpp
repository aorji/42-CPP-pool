/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:44:27 by aorji             #+#    #+#             */
/*   Updated: 2018/10/04 20:44:28 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap hero("Alex");
	ScavTrap newHero("New Alex");
//1
	std::cout << "info1:" << std::endl;
	hero.getName();
	hero.getHitPoints();
	hero.getMaxHitPoints();
	hero.getEnergyPoints();
	hero.getMaxEnergyPoints();
	hero.getLevel();
	hero.getMeleeAttackDamage();
	hero.getRangedAttackDamage();
	hero.getArmorDamageReduction();

	std::cout << "attack1:" << std::endl;
	hero.rangedAttack("gavnuk");

	hero.meleeAttack("gavnuk");

	hero.energyReducer(10);
	hero.getEnergyPoints();

	hero.takeDamage(5);
	hero.getHitPoints();

	hero.beRepaired(100);
	hero.getHitPoints();
	hero.getEnergyPoints();

	hero.vaulthunter_dot_exe("gavnuk");
	hero.getHitPoints();
	hero.getEnergyPoints();

	hero.vaulthunter_dot_exe("gavnuk");
	hero.getHitPoints();
	hero.getEnergyPoints();

	FragTrap loser("Chuvack");
	loser.setEnergyPoints(20);
	loser.vaulthunter_dot_exe("gavnuk");
	loser.getHitPoints();
	loser.getEnergyPoints();
//2
	std::cout << "info2:" << std::endl;
	newHero.getName();
	newHero.getHitPoints();
	newHero.getMaxHitPoints();
	newHero.getEnergyPoints();
	newHero.getMaxEnergyPoints();
	newHero.getLevel();
	newHero.getMeleeAttackDamage();
	newHero.getRangedAttackDamage();
	newHero.getArmorDamageReduction();

	std::cout << "attack2:" << std::endl;
	newHero.rangedAttack("gavnuk");

	newHero.meleeAttack("gavnuk");

	newHero.energyReducer(10);
	newHero.getEnergyPoints();

	newHero.takeDamage(5);
	newHero.getHitPoints();

	newHero.beRepaired(100);
	newHero.getHitPoints();
	newHero.getEnergyPoints();

	std::cout << "challenges:" << std::endl;
	newHero.challengeNewcomer();
	newHero.challengeNewcomer();

	ScavTrap newLoser("newChuvack");
	newLoser.setEnergyPoints(5);
	newLoser.challengeNewcomer();
	newLoser.getEnergyPoints();

}