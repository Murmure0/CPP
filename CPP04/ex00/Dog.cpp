/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 15:32:14 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _type("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type), _type(type)
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( Dog const & src )
{
	this->_type = src._type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog& Dog::operator=( Dog const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string Dog::getType( void ) const
{
	return this->_type;
}

void	Dog::makeSound( void ) const
{
	std::cout << "The " << getType() << " is barking." << std::endl;
}
