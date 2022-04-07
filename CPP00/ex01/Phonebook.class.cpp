/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:58:19 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/07 16:15:21 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void){
	this->_nbContact = 0;
	this->_index = 1;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

Contact *PhoneBook::getContact(void)
{	
	return (&this->_phonebook[this->_nbContact]);
}

void PhoneBook::addContact(void)
{
	this->_nbContact +=1;
	if (this->_index < MAXCONTACT - 1)
		this->_index +=1;
	else
		this->_index = MAXCONTACT;
	if (this->_nbContact > MAXCONTACT - 1)
		this->_nbContact = 0;
}

bool PhoneBook::checkField(PhoneBook *PhoneBook)
{
	if ((this->_phonebook[0].get_f_name()).length() == 0 ||
	(this->_phonebook[0].get_l_name()).length()  == 0 ||
	(this->_phonebook[0].get_nickname()).length()  == 0 ||
	(this->_phonebook[0].get_phone_number()).length()  == 0 ||
	(this->_phonebook[0].get_darkest_secret()).length()  == 0)
	{
		std::cout << "No entry yet." << std::endl;
		return (false);
	}
	return (true);
}

void truncField(std::string field)
{
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".|";
	else
		std::cout << std::right << std::setw(10) << field << "|";
}

void PhoneBook::printContact(void)
{
	std::string	tmp;
	int			nb_index;

	if (checkField(this) == false)
		return;
	std::cout << "*__________.__________.__________.__________*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->_index - 1 ; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
		truncField(this->_phonebook[i].get_f_name());
		truncField(this->_phonebook[i].get_l_name());
		truncField(this->_phonebook[i].get_nickname());
		std::cout << std::endl;
	}

	std::cout << "Which index do you want to check ?" << std::endl;
	getline(std::cin, tmp);
	if (tmp.length() == 0)
	{
		std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
		return;
	}
	for (int i = 0; i < tmp.length(); i++)
	{
		if (!isdigit(tmp[i]))
		{
			std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
			return;
		}
	}
	nb_index = std::stoi(tmp);
	if (nb_index < 0 || nb_index > this->_index - 1)
	{
		std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
		return;
	}
	std::cout << "You choose index " << nb_index << "gg !" << std::endl;

	return;
}
