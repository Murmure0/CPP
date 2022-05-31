/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:41:03 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 11:34:51 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl one;

	one.complain("DEBUG");
	std::cout << "   ---   " << std::endl;
	one.complain("INFO");
	std::cout << "   ---   " << std::endl;
	one.complain("WARNING");
	std::cout << "   ---   " << std::endl;
	one.complain("ERROR");
	std::cout << "   ---   " << std::endl;

	one.complain("hello");
	one.complain("");
	one.complain("123 456 789 ;");
}
