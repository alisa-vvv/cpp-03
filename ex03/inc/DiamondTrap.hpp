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
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap&	operator=(const DiamondTrap& other);
	~DiamondTrap();

	using	ScavTrap::attack;
	using	ScavTrap::guardGate;
	using	FragTrap::highFiveGuys;

	auto takeDamage(
		unsigned int	amount
	) -> void;

	auto beReparied(
		unsigned int	amount
	) -> void;

	auto	whoAmI(
	) -> void;

	auto printStats(
	) -> void;

protected:
private:
	std::string	_name;
	using	FragTrap::_hit_points;
	using	ScavTrap::_energy_points;
	using	FragTrap::_attack_damage;
};
