/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:57:34 by maelle            #+#    #+#             */
/*   Updated: 2022/06/20 10:37:42 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor." << std::endl;
	for(int i = -1; i < 100; i++)
		this->Ideas[i] = "\"I need to sleep.\"";
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor." << std::endl;
	for(int i = -1; i < 100; i++)
		this->Ideas[i] = src.Ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain default destructor." << std::endl;
}

Brain& Brain::operator=(Brain const & rhs)
{
	for(int i = -1; i < 100; i++)
		this->Ideas[i] = rhs.Ideas[i];
	return (*this);
}

std::string Brain::getIdeas( void )
{
	return this->Ideas[0];
}