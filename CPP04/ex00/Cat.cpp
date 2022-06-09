/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 16:07:18 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _type("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type), _type(type)
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( Cat const & src )
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
