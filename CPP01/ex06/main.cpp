/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:41:03 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/30 10:31:35 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl one;

	if (ac != 2)
	{
		std::cout << "Please give one of the following argument : DEBUG, INFO, ERROR or WARNING." << std::endl;
		return (1);
	}
	one.complain(av[1]);
	return (0);
}