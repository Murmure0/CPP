/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:15:47 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bobby("Bobby");
	std::cout << std::endl;
	ClapTrap Bobby2(Bobby);
	Bobby2.getInfos();
	std::cout << std::endl;
	ClapTrap Tiboo("Tiboo");
	std::cout << std::endl;
	Tiboo.attack("Bobby");
	Bobby.takeDamage(0);
	Bobby.getInfos();
	Tiboo.getInfos();
	std::cout << std::endl;
	std::cout << "What the ... Stop it Tiboo !" << std::endl;
	std::cout << std::endl;

	std::cout << "Bobby is furious." << std::endl;
	for (int i = 0; i < 11; i++)
	{
		Bobby.attack("Tiboo");
		Tiboo.takeDamage(0);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	Bobby.getInfos();
	Tiboo.getInfos();
	std::cout << std::endl;

	std::cout << "At least nobody's hurt. Hug each other." << std::endl;
	std::cout << std::endl;
	
	Tiboo.beRepaired(1);
	Tiboo.getInfos();
	
	Bobby.beRepaired(1);
	Bobby.getInfos();
	std::cout << std::endl;
	ClapTrap Tiboo2(Tiboo);
	Tiboo2.getInfos();
	std::cout << std::endl;

	std::cout << "Note : Too violent, destroying subjects. Sorry for the ones who did nothing." << std::endl;
	std::cout << std::endl;

}