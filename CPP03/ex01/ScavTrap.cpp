/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:24:54 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 14:16:48 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	std::cout << "Default ScavTrap constructor." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Default ScavTrap destructor." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_HitPts == 0 || this->_EnergyPts == 0)
		std::cout << "ScavTrap " << this->_name << " can't do anything, boo." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " brutally attacks " << target << ", causing " << this->_AttackDmg << " dmg!" << std::endl;
		this->_EnergyPts--;
	}
}
