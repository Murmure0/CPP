/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:40:15 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/23 10:40:17 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"

#include <string>
#include <iostream>

bool checkContact(Contact *contact, void (Contact::*f)(std::string))
{
	std::string tmp;

	while (1)
	{
		std::getline(std::cin, tmp);
		if (std::cin.eof() == 1)
			break;
		else if(tmp.length() == 0)
		{
			std::cout << "This field can't be empty." << std::endl;
			continue ;
		}
		else
		{
			(contact->*f)(tmp);
			break;
		}
	}
	if (std::cin.eof() == 1)
		return (false);
	else
		return (true);
}

bool addContact(PhoneBook *PhoneBook)
{
	Contact *contact;
	std::string tmp;

	contact = PhoneBook->getContact();
	std::cout << "I need some informations.\nCould you give me your contact first name ?" << std::endl;
	if (!checkContact(contact, &Contact::set_f_name))
		return (false);
	std::cout << "Last name ?" << std::endl;
	if (!checkContact(contact, &Contact::set_l_name))
		return (false);
	std::cout << "Nickname ?" <<  std::endl;
	if (!checkContact(contact, &Contact::set_nickname))
		return (false);
	std::cout << "Phone number ?" << std::endl;
	if (!checkContact(contact, &Contact::set_phone_number))
		return (false);
	std::cout << "Darkest secret ?" << std::endl;
	if (!checkContact(contact, &Contact::set_darkest_secret))
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
		std::getline(std::cin, str);
		if(std::cin.eof() == 1 || str == "EXIT")
		{
			std::cout << "Byebye." << std::endl;
			break;
		}
		else if(str == "ADD")
		{
			if (addContact(&PhoneBook) == false)
			{
				std::cout << "Bye." << std::endl;
				break;
			}
		}
		else if(str == "SEARCH")
		{
			if (PhoneBook.printContact() == false)
			{
				std::cout << "Goodbye." << std::endl;
				break;
			}
		}
		else
			continue;
	}
	return (0);
}
