/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:55:38 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 10:45:17 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **argv)
{
	if (ac == 2)
	{
		std::string convStr = argv[1];
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