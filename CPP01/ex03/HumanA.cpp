/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:33:43 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 13:22:03 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& W) 
	: _name(name), _W(W)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_W.getType() << std::endl;
	return ;
}
