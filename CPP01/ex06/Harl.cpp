/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:40:33 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/29 13:28:58 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ] \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "[ INFO ] \nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "[ WARNING ] \nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error(void)
{
	std::cout << "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string level)
{
	std::string message[4] = {"debug", "info", "error", "warning"};
	void (Harl::*f[4])(void) ={ &Harl::_debug, &Harl::_error, &Harl::_info, &Harl::_warning};
	int x;

	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
			x = i;
	}

	switch(x)
	{
		case 0 :
			(this->*f[x])();
		case 1 :
			(this->*f[x])();
		case 2 :
			(this->*f[x])();
		case 3 :
			(this->*f[x])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}