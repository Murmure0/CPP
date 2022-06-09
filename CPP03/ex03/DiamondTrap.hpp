/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:46:44 by maelle            #+#    #+#             */
/*   Updated: 2022/06/08 11:32:45 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public :

	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & );
	~DiamondTrap();

	DiamondTrap& operator=(DiamondTrap& rhs);

	ClapTrap::_name;
	FragTrap::_HitPts;
	ScavTrap::_EnergyPts;
	FragTrap::_AttackDmg;
	ScavTrap::attack;

	void whoAmI();
private :
	std::string _name;

};