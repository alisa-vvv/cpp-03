/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   FragTrap.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/26 15:09:05 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:53:27 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <limits.h>

FragTrap::FragTrap()
{
	ClapTrap::setName("[anonymous]");
	ClapTrap::setHP(100);
	ClapTrap::setEP(100);
	ClapTrap::setDamage(30);
}

FragTrap::FragTrap(std::string name)
{
	ClapTrap::setName(name);
	ClapTrap::setHP(100);
	ClapTrap::setEP(100);
	ClapTrap::setDamage(30);
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << ClapTrap::getName() << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << ClapTrap::getName() << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << ClapTrap::getName() << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->ClapTrap::setName(other.ClapTrap::getName());
		this->ClapTrap::setHP(other.ClapTrap::getHP());
		this->ClapTrap::setEP(other.ClapTrap::getEP());
		this->ClapTrap::setDamage(other.ClapTrap::getDamage());
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << ClapTrap::getName() << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto FragTrap::printStats(
) -> void {
	ClapTrap::printStats();
}

auto	FragTrap::attack(
	const std::string&	target
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	std::cout << "FragTrap " << ClapTrap::getName() << " attacks " << target;
	std::cout << " causing " <<  ClapTrap::getDamage() << " points of damage!\n";
}

auto	FragTrap::takeDamage(
	unsigned int	amount
) -> void {
	ClapTrap::reduceHP(amount);
	std::cout << "FragTrap " << ClapTrap::getName() << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	FragTrap::beReparied(
	unsigned int	amount
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	ClapTrap::increaseHP(amount);
	std::cout << "FragTrap " << ClapTrap::getName() << " repairs " << amount;
	std::cout << " hit points!\n";
}

auto FragTrap::highFiveGuys(
) -> void {
	std::cout << "FragTrap " << ClapTrap::getName() << " wants a HIGH FIIIIVEEE!!!\n";
}
