/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:58:19 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 10:48:01 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"
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
	if (this->_index <= MAXCONTACT)
		this->_index +=1;
	this->_nbContact +=1;
	if (this->_nbContact > MAXCONTACT - 1)
		this->_nbContact = 0;
}

bool PhoneBook::checkField(PhoneBook *PhoneBook, int index)
{
	if ((this->_phonebook[index].get_f_name()).length() == 0 ||
	(this->_phonebook[index].get_l_name()).length()  == 0 ||
	(this->_phonebook[index].get_nickname()).length()  == 0 ||
	(this->_phonebook[index].get_phone_number()).length()  == 0 ||
	(this->_phonebook[index].get_darkest_secret()).length()  == 0)
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

bool PhoneBook::printContact(void)
{
	std::string	tmp;
	int			nb_index;

	if (checkField(this, 0) == false)
		return (true);
	std::cout << "*__________.__________.__________.__________*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "*----------|----------|----------|----------*" << std::endl;
	for (int i = 0; i < MAXCONTACT; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
		truncField(this->_phonebook[i].get_f_name());
		truncField(this->_phonebook[i].get_l_name());
		truncField(this->_phonebook[i].get_nickname());
		std::cout << std::endl;
		std::cout << "*----------|----------|----------|----------*" << std::endl;
	}
	std::cout << "Which index do you want to check ?" << std::endl;
	std::getline(std::cin, tmp);
	if(std::cin.eof() == 1)
		return (false);
	if (tmp.length() == 0)
	{
		std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
		return (true);
	}
	for (int i = 0; i < tmp.length(); i++)
	{
		if (!isdigit(tmp[i]))
		{
			std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
			return (true);
		}
	}
	nb_index = std::stoi(tmp);
	if (nb_index <= 0 || nb_index > 8 || !checkField(this, (nb_index - 1)))
	{
		std::cout << "Please enter a index between 1 and " << this->_index - 1 << std::endl;
		return (true);
	}
	std::cout << "You choose index " << nb_index << " :" << std::endl;
	std::cout << "First name : " << this->_phonebook[nb_index - 1].get_f_name() << std::endl;
	std::cout << "Last name : " << this->_phonebook[nb_index - 1].get_l_name() << std::endl;
	std::cout << "Nickname : " << this->_phonebook[nb_index - 1].get_nickname() << std::endl;
	std::cout << "Phone number : " << this->_phonebook[nb_index - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << this->_phonebook[nb_index - 1].get_darkest_secret() << std::endl;
	return (true);
}
