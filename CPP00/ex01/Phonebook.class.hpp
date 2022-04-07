/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:17:27 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/06 22:24:16 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# define MAXCONTACT 8

class PhoneBook{

	public:
	PhoneBook(void);
	~PhoneBook(void);

	void printContact(void);
	void addContact(void);
	Contact *getContact(void);

	private:
	Contact _phonebook[MAXCONTACT];
	int _nbContact;
};

#endif