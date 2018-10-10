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

int main() {
	FragTrap hero("Alex");

	std::cout << "info:" << std::endl;
	std::cout << "Name: " << hero.getName() << std::endl;
	std::cout << "HitPoints = " << hero.getHitPoints() << std::endl;
	std::cout << "MaxPoints = " << hero.getMaxHitPoints() << std::endl;
	std::cout << "EnergyPoints =  " << hero.getEnergyPoints() << std::endl;
	std::cout << "MaxEnergyPoints = " << hero.getMaxEnergyPoints() << std::endl;
	std::cout << "Level = " << hero.getLevel() << std::endl;
	std::cout << "MeleeAttackDamage = " << hero.getMeleeAttackDamage() << std::endl;
	std::cout << "RangedAttackDamage = " << hero.getRangedAttackDamage() << std::endl;
	std::cout << "ArmorDamageReduction = " << hero.getArmorDamageReduction() << std::endl;

	std::cout << "attack:" << std::endl;
	hero.rangedAttack("gavnuk");

	hero.meleeAttack("gavnuk");

	hero.energyReducer(10);
	std::cout << "EnergyPoints = " << hero.getEnergyPoints() << std::endl;

	hero.takeDamage(5);
	std::cout << "HitPoints" << hero.getHitPoints() << std::endl;

	hero.beRepaired(100);
	std::cout << "HitPoints" << hero.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << hero.getEnergyPoints() << std::endl;

	hero.vaulthunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << hero.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << hero.getEnergyPoints() << std::endl;

	hero.vaulthunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << hero.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << hero.getEnergyPoints() << std::endl;

	FragTrap loser("Chuvack");
	loser.setEnergyPoints(20);
	loser.vaulthunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << loser.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << loser.getEnergyPoints() << std::endl;

	FragTrap newHero(hero);
	std::cout << "info:" << std::endl;
	std::cout << "Name: " << newHero.getName() << std::endl;
	std::cout << "HitPoints = " << newHero.getHitPoints() << std::endl;
	std::cout << "MaxPoints = " << newHero.getMaxHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << newHero.getEnergyPoints() << std::endl;
	std::cout << "MaxEnergyPoints = " << newHero.getMaxEnergyPoints() << std::endl;
	std::cout << "Level = " << newHero.getLevel() << std::endl;
	std::cout << "MeleeAttackDamage = " << newHero.getMeleeAttackDamage() << std::endl;
	std::cout << "RangedAttackDamage = " << newHero.getRangedAttackDamage() << std::endl;
	std::cout << "ArmorDamageReduction = " << newHero.getArmorDamageReduction() << std::endl;
}