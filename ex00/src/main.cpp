/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/24 16:35:00 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/24 16:35:50 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

auto	main(
	void
) -> int {
	ClapTrap	fedya("Fedya");
	ClapTrap	vanya("Vanya");

	fedya.printStats();
	vanya.printStats();

	fedya.attack("Vanya");
	vanya.takeDamage(3);
	vanya.attack("Fedya");
	fedya.takeDamage(4);

	fedya.printStats();
	vanya.printStats();
}
