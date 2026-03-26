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
	ClapTrap::setName("[anonymous]");
	ClapTrap::setHP(100);
	ClapTrap::setEP(50);
	ClapTrap::setDamage(50);
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::setName(name);
	ClapTrap::setHP(100);
	ClapTrap::setEP(50);
	ClapTrap::setDamage(50);
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << ClapTrap::getName() << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << ClapTrap::getName() << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << ClapTrap::getName() << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->ClapTrap::setName(other.ClapTrap::getName());
		this->ClapTrap::setHP(other.ClapTrap::getHP());
		this->ClapTrap::setEP(other.ClapTrap::getEP());
		this->ClapTrap::setDamage(other.ClapTrap::getDamage());
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << CLR_MAG;
	std::cout << "DiamondTrap " << ClapTrap::getName() << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto DiamondTrap::printStats(
) -> void {
	ClapTrap::printStats();
}

auto	DiamondTrap::attack(
	const std::string&	target
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	std::cout << "DiamondTrap " << ClapTrap::getName() << " attacks " << target;
	std::cout << " causing " <<  ClapTrap::getDamage() << " points of damage!\n";
}

auto	DiamondTrap::takeDamage(
	unsigned int	amount
) -> void {
	ClapTrap::reduceHP(amount);
	std::cout << "DiamondTrap " << ClapTrap::getName() << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	DiamondTrap::beReparied(
	unsigned int	amount
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	ClapTrap::increaseHP(amount);
	std::cout << "DiamondTrap " << ClapTrap::getName() << " repairs " << amount;
	std::cout << " hit points!\n";
}

auto DiamondTrap::guardGate(
) -> void {
	std::cout << "DiamondTrap " << ClapTrap::getName() << " is in Gate Keeper mode!\n";
}
