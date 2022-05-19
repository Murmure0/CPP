/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:15:56 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/19 14:07:56 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact{
	
	public :
	
	Contact(void);
	~Contact(void);
	void set_f_name(std::string f_name);
	void set_l_name(std::string l_name);
	void set_nickname(std::string nickname);
	void set_phone_number(std::string ph_nb);
	void set_darkest_secret(std::string d_secret);

	std::string get_f_name(void);
	std::string get_l_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	private :

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif