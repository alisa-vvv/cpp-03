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

//#include "ClapTrap.hpp"
//#include "ScavTrap.hpp"
//#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

auto	main(
	void
) -> int {
	DiamondTrap	emerald("Emerald");

	emerald.attack("Dumb");
	emerald.guardGate();
	emerald.highFiveGuys();

	emerald.printStats();
}
