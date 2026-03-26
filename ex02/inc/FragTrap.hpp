/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   FragTrap.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:15 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:53:52 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	using ClapTrap::ClapTrap;
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(const FragTrap& other);
	~FragTrap();

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

	auto highFiveGuys(
	) -> void;

	auto printStats(
	) -> void;
};
