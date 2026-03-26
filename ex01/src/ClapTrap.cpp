/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ClapTrap.cpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/24 16:36:46 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/26 15:26:34 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <limits.h>

/*
 * Public members
*/
ClapTrap::ClapTrap()
	: _name("[anonymous]"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << CLR_MAG;
	std::cout << "ClapTrap " << _name << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << CLR_MAG;
	std::cout << "ClapTrap " << _name << "'s default constructor called";
	std::cout << CLR_NON << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name("[anonymous]"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << CLR_MAG;
	std::cout << "ClapTrap " << _name << "'s copy constructor called";
	std::cout << CLR_NON << '\n';
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << CLR_MAG;
	std::cout << "ClapTrap " << _name << "'s assign operator called";
	std::cout << CLR_NON << '\n';
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << CLR_MAG;
	std::cout << "ClapTrap " << _name << "'s default destructor called";
	std::cout << CLR_NON << '\n';
}

auto ClapTrap::printStats(
) -> void {
	std::cout << CLR_YEL << _name << "'s stats:" << CLR_NON << '\n';
	std::cout << CLR_YEL << "HP:\t" << CLR_NON;
	std::cout << _hit_points << '\n';
	std::cout << CLR_YEL << "EP:\t" << CLR_NON;
	std::cout << _energy_points << '\n';
	std::cout << CLR_YEL << "AD:\t" << CLR_NON;
	std::cout << _attack_damage << '\n';
}

auto	ClapTrap::attack(
	const std::string&	target
) -> void {
	if (useEP() == false)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " causing " <<  _attack_damage << " points of damage!\n";
}

auto	ClapTrap::takeDamage(
	unsigned int	amount
) -> void {
	if (reduceHP(amount) == false)
		return ;
	std::cout << "ClapTrap " << _name << " takes " << amount;
	std::cout << " points of damage!\n";
}

auto	ClapTrap::beReparied(
	unsigned int	amount
) -> void {
	useEP();
	increaseHP(amount);
	std::cout << "ClapTrap " << _name << " repairs " << amount;
	std::cout << " hit points!\n";
}

auto	ClapTrap::setName(
	const std::string	name
) -> void {
	_name = name;
}
auto	ClapTrap::getName(
	void
) const -> const std::string& {
	return (_name);
}


auto	ClapTrap::setDamage(
	const unsigned int	amount
) -> void {
	_attack_damage = amount;
}
auto	ClapTrap::getDamage(
	void
) const -> unsigned int {
	return (_attack_damage);
}

auto	ClapTrap::setHP(
	const unsigned int	amount
) -> void {
	_hit_points = amount;
}
auto	ClapTrap::getHP(
	void
) const -> unsigned int {
	return (_hit_points);
}

auto	ClapTrap::setEP(
	const unsigned int	amount
) -> void {
	_energy_points = amount;
}
auto	ClapTrap::getEP(
	void
) const -> unsigned int {
	return (_energy_points);
}

auto	ClapTrap::useEP(
) -> bool {
	if (_energy_points == 0)
		return (false);
	_energy_points--;
	return (true);
}
auto	ClapTrap::reduceHP(
	const unsigned int	amount
) -> bool {
	if (_hit_points == 0)
		return (false);
	if (amount < _hit_points)
		_hit_points -= amount;
	else
		_hit_points = 0;
	return (true);
}
auto	ClapTrap::increaseHP(
	const unsigned int	amount
) -> void {
	if (UINT_MAX - _hit_points < amount)
		_hit_points = UINT_MAX;
	_hit_points += amount;
}
