/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   DiamondTrap.hpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:15 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 19:45:00 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
	using ScavTrap::FragTrap;
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap&	operator=(const DiamondTrap& other);
	~DiamondTrap();

	// this inherits all the constructors/destructors from ClapTrap class.
	// if only some constructors need to be inherited, you just call the parent's
	// constructors from a child's constructors.
	auto attack(
		const std::string&	target
	) -> void;

	auto takeDamage(
		unsigned int	amount
	) -> void;

	auto beReparied(
		unsigned int	amount
	) -> void;

	auto guardGate(
	) -> void;

	auto printStats(
	) -> void;

private:
	ClapTrap::_name;
};
