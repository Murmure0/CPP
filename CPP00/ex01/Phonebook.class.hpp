/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:17:27 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/07 14:22:00 by mberthet         ###   ########.fr       */
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
	int	_index;
};

#endif