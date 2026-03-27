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

#include "FragTrap.hpp"

auto	main(
	void
) -> int {
	FragTrap	sasha("Sasha");
	//FragTrap	sasha_clone(sasha);
	//FragTrap	sasha_clone_2 = sasha;

	sasha.printStats();

	sasha.attack("Sasha");
	sasha.takeDamage(30);
	sasha.printStats();

	sasha.beReparied(15);
	sasha.printStats();

	sasha.highFiveGuys();

	//sasha_clone.printStats();
	//sasha_clone_2.printStats();
}
