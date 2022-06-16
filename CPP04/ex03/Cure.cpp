/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:15:25 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/16 11:31:39 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & src) : AMateria (src)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

Cure* Cure::clone() const
{
	Cure* newCure = new Cure;
	std::cout << "New Cure clone created." << std::endl;
	return newCure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *"  << std::endl;
}
