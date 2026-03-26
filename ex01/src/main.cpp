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

auto	main(
	void
) -> int {
	ClapTrap	vanya("Vanya");
	ScavTrap	sveta("Sveta");

	vanya.printStats();
	sveta.printStats();

	vanya.attack("Sveta");
	sveta.takeDamage(3);
	sveta.attack("Vanya");
	vanya.takeDamage(20);

	vanya.printStats();
	sveta.printStats();

	vanya.beReparied(7);
	sveta.beReparied(2);

	vanya.printStats();
	sveta.printStats();
}
