/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/10 11:30:48 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat(void) Default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
	this->_type = src._type;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat& WrongCat::operator=( WrongCat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Very wrong meow." << std::endl;
}