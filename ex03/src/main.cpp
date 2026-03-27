/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/24 16:35:00 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 19:45:21 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

auto	main(
	void
) -> int {
	DiamondTrap	emerald("Emerald");
//	DiamondTrap	emerald_clone(emerald);
//	DiamondTrap	emerald_clone2 = emerald;

	emerald.attack("Emerald");
	emerald.takeDamage(20);
	emerald.printStats();
	emerald.beReparied(25);
	emerald.printStats();
	emerald.guardGate();
	emerald.highFiveGuys();
	emerald.whoAmI();

//	emerald_clone.printStats();
//	emerald_clone2.printStats();
}
