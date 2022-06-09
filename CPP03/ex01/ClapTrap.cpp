/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:38 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 11:06:26 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _HitPts(10), _EnergyPts(10), _AttackDmg(0)
{
	std::cout << "ClapTrap(void) Default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPts(10), _EnergyPts(10), _AttackDmg(0)
{
	std::cout << "ClapTrap Default constructor." << std::endl;
	std::cout << "Hello " << this->_name << "." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default destructor." << std::endl;
	std::cout << "Byebye " << this->_name << "." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap Copy constructor." << std::endl;
	std::cout << "Another " << src._name << " is created with the stats of previous " << src._name << "." << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::attack(const std::string& target)
{
	if (this->_HitPts == 0)
			std::cout << this->_name << " can't do anything, it doesn't have enough HP." << std::endl;
	else if (this->_EnergyPts == 0)
			std::cout << this->_name << " can't do anything, it doesn't have enough Energy." << std::endl;
	else
	{
		std::cout << this->_name << " attacks without conviction " << target << ", causing " << this->_AttackDmg << " dmg." << std::endl;
		this->_EnergyPts--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPts == 0)
	{
		std::cout << this->_name << " is dead." << std::endl;
	}
	else if (this->_HitPts > 0 && this->_HitPts < amount)
	{
		this->_HitPts = 0;
		std::cout << "Oh no, " << this->_name << " is in a very bad situation !" << std::endl;
		std::cout << this->_name << " deals " << amount << " dmg, current HP : " << this->_HitPts << std::endl;
	}
	else
	{
		this->_HitPts = this->_HitPts - amount;
		std::cout << this->_name << " deals " << amount << " dmg, current HP : " << this->_HitPts << "." <<std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPts == 0)
			std::cout << this->_name << " can't do anything, it doesn't have enough HP." << std::endl;
	else if (this->_EnergyPts == 0)
			std::cout << this->_name << " can't do anything, it doesn't have enough Energy." << std::endl;
	else
	{
		this->_HitPts += amount;
		this->_EnergyPts--;
		std::cout << this->_name << " is being repaired : + " << amount << " HP. Current HP : " << this->_HitPts << "." << std::endl;
		if (this->_HitPts == 0)
			std::cout << "Oh no, " << this->_name << "is in a very very bad situation !" << std::endl;
	}
}

void ClapTrap::getInfos()
{
	std::cout << this->_name << " infos : " << this->_HitPts << " HP & " << this->_EnergyPts << " EP & " << this->_AttackDmg << " Atk." << std::endl;
}

unsigned int ClapTrap::getAtk( void )
{
	return this->_AttackDmg;
}
