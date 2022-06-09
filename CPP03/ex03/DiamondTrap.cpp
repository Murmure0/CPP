/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:46:17 by maelle            #+#    #+#             */
/*   Updated: 2022/06/09 14:33:39 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
	std::cout << "DiamondTrap(void) default constructor." << std::endl;
	this->ClapTrap::_name = "Unknown_clap_name";
	this->FragTrap::_HitPts = 100;
	this->ScavTrap::_EnergyPts = 50;
	this->FragTrap::_AttackDmg = 30;
	getInfos();
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor." << std::endl;
	this->_name = name;
	this->FragTrap::_HitPts = 100;
	this->ScavTrap::_EnergyPts = 50;
	this->FragTrap::_AttackDmg = 30;
	getInfos();
}

DiamondTrap::DiamondTrap ( DiamondTrap const &src ) : ClapTrap(src)
{
	this->_name = src._name;
	this->FragTrap::_HitPts = src._HitPts;
	this->ScavTrap::_EnergyPts = src._EnergyPts;
	this->FragTrap::_AttackDmg = src._AttackDmg;
	std::cout << "DiamondTrap copy constructor." << std::endl;
	getInfos();
}


DiamondTrap::~DiamondTrap ()
{
	std::cout << "DiamondTrap Default destructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_HitPts = rhs._HitPts;
		this->_EnergyPts = rhs._EnergyPts;
		this->_AttackDmg = rhs._AttackDmg;
	}
	return *this;
}

void	DiamondTrap::attack( std::string const & target )
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::getInfos()
{
	std::cout << this->_name << " infos : " << this->_HitPts << " HP & " << this->_EnergyPts << " EP & " << this->_AttackDmg << " Atk." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm " << this->_name << " and my ClapTrap object name is : "<< this->ClapTrap::_name << std::endl;
}

