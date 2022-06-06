/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:38 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 17:07:16 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPts(10), _EnergyPts(10), _AttackDmg(0)
{
	std::cout << "Default constructor." << std::endl;
	std::cout << "Hello ClapTrap " << name << " ! You have : " << _HitPts << " HitsPoints and " << _EnergyPts << " EnergyPoints, use them carefully. You also have " << _AttackDmg << " of Attack dommages." << std::endl;

}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor." << std::endl;
	std::cout << "Byebye ClapTrap " << this->_name << ". You were the best." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "Copy constructor." << std::endl;
	std::cout << "Another ClapTrap is created with the stats of previous ClapTrap " << src._name << "." << std::endl;
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
	if (this->_HitPts == 0 || this->_EnergyPts == 0)
		std::cout << "ClapTrap " << this->_name << " can't do anything." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing" << this->_AttackDmg << " points of damage!" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPts < amount)
	{
		this->_HitPts = 0;
		std::cout << "Oh no, ClapTrap " << this->_name << "is in a very bad situation !" << std::endl;
		std::cout << "ClapTrap " << this->_name << " deals " << amount << " points of damages, its HP are : " << this->_HitPts << std::endl;
	}
	else
	{
		this->_HitPts = this->_HitPts - amount;
		this->_EnergyPts--;
		std::cout << "ClapTrap " << this->_name << " deals " << amount << " points of damages, its HP are : " << this->_HitPts << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPts == 0 || this->_EnergyPts == 0)
			std::cout << "ClapTrap " << this->_name << " can't do anything." << std::endl;
	else
	{
		this->_HitPts += amount;
		this->_EnergyPts--;
		std::cout << "ClapTrap " << this->_name << " is being repaired." << amount << " are recovered, its HP are : " << this->_HitPts << std::endl;
		if (this->_HitPts == 0)
			std::cout << "Oh no, ClapTrap " << this->_name << "is in a very very bad situation !" << std::endl;
	}
}