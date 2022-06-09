/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:46:17 by maelle            #+#    #+#             */
/*   Updated: 2022/06/08 11:39:33 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name)
{
	std::cout << "DiamondTrap default constructor." << std::endl;
}

DiamondTrap::DiamondTrap (DiamondTrap const &src) : FragTrap(src)
{
	sdt::cout << "DiamondTrap copy constructor." << std::endl;
}


