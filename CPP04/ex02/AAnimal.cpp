/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 10:18:05 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal(void) Default constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src )
{
	this->_type = src._type;
	std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Default destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=( AAnimal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string	AAnimal::getType( void ) const
{
	return this->_type;
}

void		AAnimal::setType( std::string type )
{
	this->_type = type;
}
