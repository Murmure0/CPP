/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:13:16 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 18:25:25 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria (src)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(Ice const &  rhs)
{
	this->_type = rhs._type;
	return *this;
}

Ice* Ice::clone() const
{
	Ice* newIce = new Ice;
	return newIce;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << std::endl;
}