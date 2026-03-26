/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ScavTrap.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:05 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:53:27 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <limits.h>

ScavTrap::ScavTrap()
{
	ClapTrap::setName("[anonymous]");
	ClapTrap::setHP(100);
	ClapTrap::setEP(50);
	ClapTrap::setDamage(50);
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::setName(name);
	ClapTrap::setHP(100);
	ClapTrap::setEP(50);
	ClapTrap::setDamage(50);
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << ClapTrap::getName() << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << ClapTrap::getName() << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << ClapTrap::getName() << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->ClapTrap::setName(other.ClapTrap::getName());
		this->ClapTrap::setHP(other.ClapTrap::getHP());
		this->ClapTrap::setEP(other.ClapTrap::getEP());
		this->ClapTrap::setDamage(other.ClapTrap::getDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << ClapTrap::getName() << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto ScavTrap::printStats(
) -> void {
	ClapTrap::printStats();
}

auto	ScavTrap::attack(
	const std::string&	target
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	std::cout << "ScavTrap " << ClapTrap::getName() << " attacks " << target;
	std::cout << " causing " <<  ClapTrap::getDamage() << " points of damage!\n";
}

auto	ScavTrap::takeDamage(
	unsigned int	amount
) -> void {
	ClapTrap::reduceHP(amount);
	std::cout << "ScavTrap " << ClapTrap::getName() << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	ScavTrap::beReparied(
	unsigned int	amount
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	ClapTrap::increaseHP(amount);
	std::cout << "ScavTrap " << ClapTrap::getName() << " repairs " << amount;
	std::cout << " hit points!\n";
}

auto ScavTrap::guardGate(
) -> void {
	std::cout << "ScavTrap " << ClapTrap::getName() << " is in Gate Keeper mode!\n";
}
