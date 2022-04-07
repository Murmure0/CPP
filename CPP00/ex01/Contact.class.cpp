/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:51:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/06 22:24:15 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}


std::string Contact::get_f_name(void){
	return this->_first_name;
}
std::string Contact::get_l_name(void){
	return this->_last_name;
}
std::string Contact::get_nickname(void){
	return this->_nickname;
}
std::string Contact::get_phone_number(void){
	return this->_phone_number;
}
std::string Contact::get_darkest_secret(void){
	return this->_darkest_secret;
}


void Contact::set_f_name(std::string f_name)
{
	this->_first_name = f_name;
	return;
}

void Contact::set_l_name(std::string l_name)
{
	this->_last_name = l_name;
	return;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
	return;
}

void Contact::set_phone_number(std::string ph_nb)
{
	this->_phone_number = ph_nb;
	return;
}

void Contact::set_darkest_secret(std::string d_secret)
{
	this->_darkest_secret = d_secret;
	return;
}

