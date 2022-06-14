/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:56:49 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 18:19:24 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_knownMateria[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for(int i = 0; i < 4; i++)
	{
		this->_knownMateria[i] = src._knownMateria[i];
	}
}

MateriaSource::~MateriaSource()
{
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i < 4; i++)
	{
		this->_knownMateria[i] = rhs._knownMateria[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while(i < 3)
	{
		if (this->_knownMateria[i] == nullptr)
		{
			this->_knownMateria[i] = materia;
			break;
		}
		i++;
	}
	if (i > 3)
		std::cout << "Learning new materia in materiaSource impossible." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while(this->_knownMateria[i]->getType() != type)
	{
		i++;
		if (i > 3)
		{
			std::cout << "No materia known as " << type << std::endl;
			return NULL;
		}
	}
	return (this->_knownMateria[i]);
}
