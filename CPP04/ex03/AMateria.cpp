/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:46:46 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/20 10:57:49 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria created." << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria by copy created." << std::endl;
	this->_type = src._type;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(AMateria  const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << " * Shpouick on " << target.getName() << std::endl;
}
