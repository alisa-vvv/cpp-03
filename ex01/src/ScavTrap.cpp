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
	: _name("empty_name"),
	_hit_points(100),
	_energy_points(50),
	_attack_damage(20)
{
}

ScavTrap::ScavTrap([[maybe_unused]] std::string name)
	: _name(name),
	_hit_points(100),
	_energy_points(50),
	_attack_damage(20)
{
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << name << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: _name("empty_name"),
	_hit_points(100),
	_energy_points(50),
	_attack_damage(20)
{
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << "_name" << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

ScavTrap&	ScavTrap::operator=([[maybe_unused]] const ScavTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << "_name" << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << CLR_MAG;
	std::cout << "ScavTrap " << "_name" << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto ScavTrap::printStats(
) -> void {
	std::cout << CLR_YEL << _name << "'s stats:" << CLR_NON << '\n';
	std::cout << CLR_YEL << "HP:\t" << CLR_NON;
	std::cout << _hit_points << '\n';
	std::cout << CLR_YEL << "EP:\t" << CLR_NON;
	std::cout << _energy_points << '\n';
	std::cout << CLR_YEL << "AD:\t" << CLR_NON;
	std::cout << _attack_damage << '\n';
}

auto	ScavTrap::attack(
	const std::string&	target
) -> void {
	if (_energy_points == 0)
		return ;
	_energy_points--;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " causing " <<  _attack_damage << " points of damage!\n";
}

auto	ScavTrap::takeDamage(
	unsigned int	amount
) -> void {
	if (_hit_points == 0)
		return ;
	if (amount < _hit_points)
		_hit_points -= amount;
	else
		_hit_points = 0;
	std::cout << "ScavTrap " << _name << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	ScavTrap::beReparied(
	unsigned int	amount
) -> void {
	if (_energy_points == 0)
		return ;
	_energy_points--;
	if (UINT_MAX - _hit_points < amount)
		_hit_points = UINT_MAX;
	_hit_points += amount;
	std::cout << "ScavTrap " << _name << " repairs " << amount;
	std::cout << " hit points!\n";
}
