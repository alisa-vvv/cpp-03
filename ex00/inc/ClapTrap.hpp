/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   ClapTrap.hpp                                            :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/24 16:36:59 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/24 16:42:21 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#define	CLR_NON "\033[0m"
#define	CLR_YEL "\033[93m"
#define	CLR_CYA "\033[96m"
#define	CLR_RED "\033[31m"
#define	CLR_GRN "\033[92m"
#define	CLR_MAG "\033[95m"

class	ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap& other);
	~ClapTrap();

	auto attack(
		const std::string&	target
	) -> void;

	auto takeDamage(
		unsigned int	amount
	) -> void;

	auto beReparied(
		unsigned int	amount
	) -> void;

	auto printStats(
	) -> void;

private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	auto	_checkEnergy(
	) -> void;
};
