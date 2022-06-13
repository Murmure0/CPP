/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:57:34 by maelle            #+#    #+#             */
/*   Updated: 2022/06/11 14:01:52 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor." << std::endl;
}

Brain::Brain(Brain const & src)
{
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
