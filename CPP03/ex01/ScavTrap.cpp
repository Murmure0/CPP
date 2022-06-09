/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:24:54 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 10:55:21 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap(void) Default constructor." << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 50;
	this->_AttackDmg = 20;
	this->getInfos();
}

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor." << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 50;
	this->_AttackDmg = 20;
	this->getInfos();
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Default destructor." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& src ) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_HitPts == 0)
			std::cout << "ScavTrap " << this->_name << " can't do anything, it doesn't have enough HP." << std::endl;
	else if (this->_EnergyPts == 0)
			std::cout << "ScavTrap " << this->_name << " can't do anything, it doesn't have enough Energy." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " brutally attacks " << target << ", causing " << this->_AttackDmg << " dmg!" << std::endl;
		this->_EnergyPts--;
	}
}

void ScavTrap::guardGate( void )
{
	std::cout << this->_name << " : Gate Keeper mode activated." << std::endl;
}
