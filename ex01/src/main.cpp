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
	ClapTrap	fedya("Fedya");
	ClapTrap	vanya("Vanya");
	ScavTrap	sveta("Sveta");

	fedya.printStats();
	vanya.printStats();
	sveta.printStats();

	fedya.attack("Vanya");
	vanya.takeDamage(3);
	vanya.attack("Fedya");
	fedya.takeDamage(4);
	sveta.attack("Vanya");
	vanya.takeDamage(20);

	fedya.printStats();
	vanya.printStats();
	sveta.printStats();
}
