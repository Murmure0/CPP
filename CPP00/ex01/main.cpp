/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:56:55 by maelle            #+#    #+#             */
/*   Updated: 2022/04/07 17:06:36 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

#include <string>
#include <iostream>

bool checkContact(Contact *contact, void (Contact::*f)(std::string))
{
	std::string tmp;

	getline(std::cin, tmp);
	if (tmp.length() == 0)
	{
		std::cout << "This field can't be empty." << std::endl;
		return (false);
	}
	else
		(contact->*f)(tmp);
	return (true);
}

bool addContact(PhoneBook *PhoneBook)
{
	Contact *contact;
	std::string tmp;

	contact = PhoneBook->getContact();
	std::cout << "I need some informations.\nCould you give me your contact first name ?" << std::endl;
	if (checkContact(contact, &Contact::set_f_name) == false)
		return (false);
	std::cout << "Last name ?" << std::endl;
	if (checkContact(contact, &Contact::set_l_name) == false)
		return (false);
	std::cout << "Nickname ?" <<  std::endl;
	if (checkContact(contact, &Contact::set_nickname) == false)
		return (false);
	std::cout << "Phone number ?" << std::endl;
	if (checkContact(contact, &Contact::set_phone_number) == false)
		return (false);
	std::cout << "Darkest secret ?" << std::endl;
	if (checkContact(contact, &Contact::set_darkest_secret) == false)
		return (false);
	PhoneBook->addContact();
	return (true);
}

int main()
{
	PhoneBook PhoneBook;
	
	std::string str;

	std::cout << "Welcome to the PhoneBook." <<std::endl;
	while (1)
	{
		std::cout << "What do you want to do : ADD, SEARCH or EXIT ?" << std::endl;
		getline(std::cin, str);
		if(std::cin.eof() == 1) 
			break;
		if(str == "EXIT")
		{
			std::cout << "Byebye." << std::endl;
			break;
		}
		else if(str == "ADD")
		{
			if (addContact(&PhoneBook) == false)
				continue;
		}
		else if(str == "SEARCH")
		{
			if (PhoneBook.printContact() == false)
				break;
		}
		else
			continue;
	}
	return (0);
}