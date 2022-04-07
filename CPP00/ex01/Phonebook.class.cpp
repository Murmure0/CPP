/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:58:19 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/06 22:24:11 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void){
	this->_nbContact = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

Contact *PhoneBook::getContact(void){	
	return (&this->_phonebook[this->_nbContact]);
}

void PhoneBook::addContact(void){
	this->_nbContact +=1;
	if (this->_nbContact > MAXCONTACT)
		_nbContact = 0;
}

void PhoneBook::printContact(void){

	if((this->_phonebook[0].get_f_name()).length() == 0)
	{
		std::cout << "No entry yet." << std::endl;
		return;
	}
	std::cout << "*__________.__________.__________.__________*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->_nbContact; i++)
	{
		if((this->_phonebook[i].get_f_name()).length() == 0)
			return;
		std::cout << "|" << std::right << std::setw(10) << i << "|";
		if ((this->_phonebook[i].get_f_name()).length() > 10)
			std::cout << (this->_phonebook[i].get_f_name()).substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << this->_phonebook[i].get_f_name() << "|";
		if ((this->_phonebook[i].get_l_name()).length() > 10)
			std::cout << (this->_phonebook[i].get_l_name()).substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << this->_phonebook[i].get_l_name() << "|";
		if ((this->_phonebook[i].get_nickname()).length() > 10)
			std::cout << (this->_phonebook[i].get_nickname()).substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::right << std::setw(10) << this->_phonebook[i].get_nickname() << "|" << std::endl;


	}
	return;
}
