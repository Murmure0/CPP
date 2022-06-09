/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:23 by maelle            #+#    #+#             */
/*   Updated: 2022/06/09 13:49:41 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap(void) Default constructor." << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AttackDmg = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor." << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AttackDmg = 30;
}

FragTrap::FragTrap( const FragTrap& src ) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << "Guys, you're so cool ! High five ?" << std::endl;
}
