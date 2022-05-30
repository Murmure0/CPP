/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:40:33 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/30 10:24:46 by maelle           ###   ########.fr       */
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
	std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void (Harl::*f[4])(void) ={ &Harl::_debug, 
								&Harl::_info, 
								&Harl::_warning, 
								&Harl::_error};
	
	int x;
	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
			x = i;
	}

	switch(x)
	{
		case 0 :
			(this->*f[0])();
		case 1 :
			(this->*f[1])();
		case 2 :
			(this->*f[2])();
		case 3 :
			(this->*f[3])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}