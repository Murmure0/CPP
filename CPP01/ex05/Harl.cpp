/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:40:33 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/26 15:28:08 by mberthet         ###   ########.fr       */
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
	std::cout << "Debug." << std::endl;
}
void Harl::_info(void)
{
	std::cout << "Info." << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "Warning." << std::endl;
}
void Harl::_error(void)
{
	std::cout << "Error." << std::endl;
}

void Harl::complain(std::string level)
{
	// void (Harl::*f)(void)const;


	// level.insert(0,"_");
	// std::cout << level <<std::endl;
	// f = &Harl::pop();

// int add(int x, int y) {return x+y;}
// int sub(int x, int y) {return x-y;}

// int main()
// {
//     std::map<std::string, std::function<int(int,int)>>  funcMap =
//          {{ "add", add},
//           { "sub", sub}
//          };

//     std::cout << funcMap["add"](2,3) << "\n";
//     std::cout << funcMap["sub"](5,2) << "\n";
// }
	
	std::map<std::string, std::function<void()> > funcMap =
			{{ "debug", this->_debug()},
			 { "info", this->_info()},
			 {"error", this->_error()},
			 {"warning", this->_warning()}
			};
}