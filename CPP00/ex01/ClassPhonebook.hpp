/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:17:27 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/19 15:23:58 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "ClassContact.hpp"
# define MAXCONTACT 8

class PhoneBook{

	public:

	PhoneBook(void);
	~PhoneBook(void);

	bool	printContact(void);
	void	addContact(void);
	bool	checkField(PhoneBook *PhoneBook, int index);
	Contact	*getContact(void);

	private:

	Contact	_phonebook[MAXCONTACT];
	int		_nbContact;
	int		_index;
};

#endif