/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:24:54 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 13:46:31 by mberthet         ###   ########.fr       */
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

ScavTrap::ScavTrap( ScavTrap const& src )
{
	std::cout << "ScavTrap Copy constructor." << std::endl;
	*this = src;
}

