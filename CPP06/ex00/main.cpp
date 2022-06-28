/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:55:38 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/24 15:09:25 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **argv)
{
	std::string convStr = argv[1];
	if (ac == 2)
	{
		try{
			class Convert GogoConvert(convStr);
			std::cout <<std::fixed << std::setprecision(1);
			std::cout << GogoConvert;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Wrong input. Usage : ./Convert <type>" << std::endl;

	return 0;
}