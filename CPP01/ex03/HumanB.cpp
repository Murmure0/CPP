/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:33:50 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 13:17:52 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_W->getType() <<std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_W = &weapon;
	return ;
}
