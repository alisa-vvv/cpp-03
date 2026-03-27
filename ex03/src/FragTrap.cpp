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
	_name = "[anonymous]";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << _name << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << _name << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << _name << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << CLR_MAG;
	std::cout << "FragTrap " << _name << "'s default destructor called";
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
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " causing " <<  _attack_damage << " points of damage!\n";
}

auto	FragTrap::takeDamage(
	unsigned int	amount
) -> void {
	ClapTrap::reduceHP(amount);
	std::cout << "FragTrap " << _name << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	FragTrap::beReparied(
	unsigned int	amount
) -> void {
	if (ClapTrap::useEP() == false)
		return ;
	ClapTrap::increaseHP(amount);
	std::cout << "FragTrap " << _name << " repairs " << amount;
	std::cout << " hit points!\n";
}

auto FragTrap::highFiveGuys(
) -> void {
	std::cout << "FragTrap " << _name << " wants a HIGH FIIIIVEEE!!!\n";
}
