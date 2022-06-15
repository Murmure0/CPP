/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:56:49 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/15 21:21:26 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_knownMateria[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for(int i = 0; i < 4; i++)
	{
		if (src._knownMateria[i])
			this->_knownMateria[i] = src._knownMateria[i]->clone();
		else
			this->_knownMateria[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		delete this->_knownMateria[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "Operateur = " << std::endl;
	for(int i = 0; i < 4; i++)
	{
		delete this->_knownMateria[i];
		if (rhs._knownMateria[i])
			this->_knownMateria[i] = rhs._knownMateria[i]->clone();
		else
			this->_knownMateria[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while(i < 4)
	{
		if (this->_knownMateria[i] == NULL)
		{
			// this->_knownMateria[i] = materia->clone();
			this->_knownMateria[i] = materia;
			std::cout << "Generating new materia " << materia->getType() <<std::endl;
			std::cout << "Learning materia " << this->_knownMateria[i]->getType() << " as spell num " << i <<std::endl;
			// delete materia;
			break;
		}
		i++;
	}
	if (i > 3)
	{
		std::cout << "Learning new materia in materia Source impossible." << std::endl;
		delete materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	//std::cout << this->_knownMateria[0]->getType() << std::endl;
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
