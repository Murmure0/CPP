/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:55:38 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/23 15:07:55 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **argv)
{
	std::string convStr = argv[1];
	if (ac != 2)
	{
		std::cout << "No argument. Usage: ./Convert + \"your_argument\"." << std::endl;
	}
	else{
		class Convert GogoConvert(convStr);
		std::cout <<std::fixed << std::setprecision(1);
		std::cout << GogoConvert << std::endl;
	}
}