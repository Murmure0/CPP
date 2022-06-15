/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:15:25 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/15 10:34:31 by mberthet         ###   ########.fr       */
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
	std::cout << "New Cure created !" << std::endl;
	return newCure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoot a cure bolt at " << target.getName() << std::endl;
}
