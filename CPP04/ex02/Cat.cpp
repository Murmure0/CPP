/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 10:14:41 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat(void) Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( std::string type ) : AAnimal(type)
{
	std::cout << "Cat " << getType() << " Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( Cat const & src ) : AAnimal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat& Cat::operator=( Cat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
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