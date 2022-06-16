/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:31:42 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/16 11:42:28 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_rejectedMateria[i] = NULL;
	std::cout << "Hello random character." << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_rejectedMateria[i] = NULL;
	std::cout << "Hello " << this->_name << "." << std::endl;
}

Character::Character(Character const & src)
{
	std::cout << "Hello " << this->_name  << " character by copy."<< std::endl;
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
}

Character::~Character()
{
	for (int i =0; i < 4; i ++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	for (int i =0; i < 100; i ++)
		if (this->_materia[i] != NULL)
			delete this->_rejectedMateria[i];
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
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

	if (!m)
	{
		std::cout << "No materia equiped." << std::endl;
		return ;
	}
	while (this->_materia[i] != NULL)
		i++;
	if (i > 3)
	{
		std::cout << "Too many materia equiped." << std::endl;
		return ;
	}
	else
	{
		this->_materia[i] = m;
		std::cout << this->getName() <<" equiping materia " << this->_materia[i]->getType() << " as spell " << i << std::endl;
	}
}

void Character::unequip(int idx)
{
	int i = 0;
	if (!this->_materia[idx])
	{
		std::cout << "No materia to unequip." << std::endl;
		return ;
	}
	else if (this->_materia[idx] != NULL && idx >= 0 && idx <= 3)
	{
		while (this->_rejectedMateria[i] != NULL && i < 100)
			i++;
		this->_rejectedMateria[i] = this->_materia[idx];
		std::cout << "Materia " << this->_materia[idx]->getType() << " unequiped." << std::endl;
		this->_materia[idx] = NULL;
	}
	else
		std::cout << "Wrong index." << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
	if (this->_materia[idx] != NULL && idx >= 0 && idx <= 3)
		this->_materia[idx]->use(target);
	else
		std::cout << "Wrong index." << std::endl;
}