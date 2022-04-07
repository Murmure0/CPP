/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:56:55 by maelle            #+#    #+#             */
/*   Updated: 2022/04/06 22:24:13 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

#include <string>
#include <iostream>

int main()
{
	PhoneBook PhoneBook;
	Contact *contact;
	std::string tmp;
	std::string str;

	std::cout << "Welcome to the PhoneBook." <<std::endl;
	while (1)
	{
		std::cout << "What do you want to do : ADD, SEARCH or EXIT ?" << std::endl;
		getline(std::cin, str);
		// if(std::cin.eof() == 1) 
		// {
		// 	continue; /* CTRL D : infinite loop; Enter : okay */
		// 	// break /* CTRL D : quit okay; Enter : quit too D: */
		// }
		if(str == "EXIT" || str == "")
		{
			std::cout << "Byebye." << std::endl;
			break;
		}
		else if(str == "ADD")
		{
			contact = PhoneBook.getContact();
			std::cout << "I need some informations.\nCould you give me your contact first name ?" << std::endl;
			getline(std::cin, tmp);
			if (tmp.length() == 0)
			{
				std::cout << "This field can't be empty." << std::endl;			
				continue;
			}
			else
				contact->set_f_name(tmp);

			std::cout << "Last name ?" << std::endl;
			getline(std::cin, tmp);
			if (tmp.length() == 0)
			{
				std::cout << "This field can't be empty." << std::endl;			
				continue;
			}
			else
				contact->set_l_name(tmp);

			std::cout << "Nickname ?" <<  std::endl;
			getline(std::cin, tmp);
			if (tmp.length() == 0)
			{
				std::cout << "This field can't be empty." << std::endl;			
				continue;
			}
			else
				contact->set_nickname(tmp);
			
			std::cout << "Phone number ?" << std::endl;
			getline(std::cin, tmp);
			if (tmp.length() == 0)
			{
				std::cout << "This field can't be empty." << std::endl;			
				continue;
			}
			else
				contact->set_phone_number(tmp);

			std::cout << "Darkest secret ?" << std::endl;
			getline(std::cin, tmp);
			if (tmp.length() == 0)
			{
				std::cout << "This field can't be empty." << std::endl;			
				continue;
			}
			else
				contact->set_darkest_secret(tmp);
			PhoneBook.addContact();
		}
		else if(str == "SEARCH")
		{
			PhoneBook.printContact();
		}		
	}
	return (0);
}