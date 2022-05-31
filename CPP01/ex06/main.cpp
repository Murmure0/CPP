/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:41:03 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 13:29:41 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl one;

	if (ac != 2)
	{
		std::cout << "Please enter one of the following argument : \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
		return (1);
	}
	one.complain(av[1]);
	return (0);
}