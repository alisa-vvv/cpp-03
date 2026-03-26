/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/24 16:35:00 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:55:21 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

auto	main(
	void
) -> int {
	ClapTrap	vanya("Vanya");
	ScavTrap	sveta("Sveta");
	FragTrap	sasha("Sasha");

	vanya.printStats();
	sveta.printStats();
	sasha.printStats();

	vanya.attack("Sveta");
	sveta.takeDamage(3);
	sveta.attack("Vanya");
	vanya.takeDamage(20);
	sasha.attack("Sveta");
	sveta.takeDamage(30);
	sveta.attack("Sasha");
	sasha.takeDamage(50);

	vanya.printStats();
	sveta.printStats();
	sasha.printStats();

	vanya.beReparied(7);
	sveta.beReparied(2);
	sasha.beReparied(15);

	vanya.printStats();
	sasha.printStats();
	sveta.printStats();
	sveta.guardGate();
	sasha.highFiveGuys();
}
