/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 16:07:22 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
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

void	Animal::makeSound( void ) const
{
	std::cout << "The " << getType() << " is making a random animal sound." << std::endl;
}
