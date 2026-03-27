/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   DiamondTrap.cpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:05 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 19:46:51 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <limits.h>

DiamondTrap::DiamondTrap()
{
	_name = "[anonymous]";
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	FragTrap::_name = name;
	ScavTrap::_name = name;
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << _name << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << _name << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << _name << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << _name << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto DiamondTrap::printStats(
) -> void {
	ClapTrap::printStats();
}

//auto	DiamondTrap::attack(
//	const std::string&	target
//) -> void {
//	if (ClapTrap::useEP() == false)
//		return ;
//	std::cout << "DiamondTrap " << _name << " attacks " << target;
//	std::cout << " causing " <<  _attack_damage << " points of damage!\n";
//}

auto	DiamondTrap::takeDamage(
	unsigned int	amount
) -> void {
	ClapTrap::reduceHP(amount);
	std::cout << "DiamondTrap " << _name << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	DiamondTrap::beReparied(
	unsigned int	amount
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	ClapTrap::increaseHP(amount);
	std::cout << "DiamondTrap " << _name << " repairs " << amount;
	std::cout << " hit points!\n";
}
