/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:23 by maelle            #+#    #+#             */
/*   Updated: 2022/06/07 16:45:07 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Default FragTrap constructor." << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AttackDmg = 30;
	this->getInfos();
}

FragTrap::FragTrap( const FragTrap& src ) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "Guys, you're so cool ! High five ?" << std::endl;
}
