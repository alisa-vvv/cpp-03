/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ScavTrap.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:15 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:53:52 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	using ClapTrap::ClapTrap;
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(const ScavTrap& other);
	~ScavTrap();

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
};
