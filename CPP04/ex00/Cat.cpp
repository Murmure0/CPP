/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/10 15:25:49 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat(void) Default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type)
{
	std::cout << "Cat " << getType() << " Default constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	this->_type = src._type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat& Cat::operator=( Cat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string Cat::getType( void ) const
{
	return this->_type;
}

void	Cat::makeSound( void ) const
{
	std::cout << "The " << getType() << " is meowing." << std::endl;
}
