/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/11 12:43:35 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal(void) Default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( Animal const & src )
{
	this->_type = src._type;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}

Animal& Animal::operator=( Animal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::setType( std::string type )
{
	this->_type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "The " << getType() << " is making a random animal sound." << std::endl;
}
