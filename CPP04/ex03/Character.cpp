/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:31:42 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 18:23:29 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "No name";
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(Character const & src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = src._materia[i];
}

Character::~Character()
{
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = rhs._materia[i];
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (this->_materia[i] != nullptr)
		i++;
	if (i > 3)
		return ;
	else
		this->_materia[i] = m;
}

void Character::unequip(int idx)
{
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->_materia[idx]->use(target);
}