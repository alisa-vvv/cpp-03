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

#include "ScavTrap.hpp"

auto	main(
	void
) -> int {
	ScavTrap	sveta("Sveta");
	//ScavTrap	sveta_clone(sveta);
	//ScavTrap	sveta_clone_2 = sveta;

	sveta.printStats();

	sveta.attack("Sveta");
	sveta.takeDamage(20);
	sveta.printStats();

	sveta.beReparied(25);
	sveta.printStats();

	sveta.guardGate();

	//sveta_clone.printStats();
	//sveta_clone_2.printStats();
}
