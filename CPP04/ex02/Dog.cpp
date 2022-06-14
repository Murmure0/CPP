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

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog(void) Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( std::string type ) : AAnimal(type)
{
	std::cout << "Dog " << getType() << " Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( Dog const & src ) : AAnimal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog& Dog::operator=( Dog const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
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

