/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:58:19 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/07 14:25:15 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void){
	this->_nbContact = 0;
	this->_index = 0;
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
	if (this->_index < MAXCONTACT - 1)
		this->_index +=1;
	else
		this->_index = MAXCONTACT;
	if (this->_nbContact > MAXCONTACT - 1)
		this->_nbContact = 0;
}

void PhoneBook::printContact(void){

	if((this->_phonebook[0].get_f_name()).length() == 0)
	{
		std::cout << "No entry yet." << std::endl;
		return;
	}
	std::cout << "*__________.__________.__________.__________*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->_index; i++)
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
