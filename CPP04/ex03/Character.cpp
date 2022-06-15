/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:31:42 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/15 21:10:25 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "coucou created" << std::endl;
	this->_name = "No name";
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << name <<" created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "Coucou" << std::endl;

	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
}

Character::~Character()
{
	for (int i =0; i  < 4; i ++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	std::cout << "Operateur = " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_materia[i];
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (this->_materia[i] != NULL)
		i++;
	if (i > 3)
		return ;
	else
		this->_materia[i] = m->clone();
}

void Character::unequip(int idx)
{
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->_materia[idx]->use(target);
}