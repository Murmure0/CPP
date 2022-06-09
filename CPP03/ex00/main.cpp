/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 10:41:39 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bobby("Bobby");
	Bobby.getInfos();
	std::cout << std::endl;

	ClapTrap Bobby2(Bobby);
	Bobby2.getInfos();
	std::cout << std::endl;

	ClapTrap Tiboo("Tiboo");
	std::cout << std::endl;

	Tiboo.attack("Bobby");
	std::cout << std::endl;

	Bobby.takeDamage(Tiboo.getAtk());
	std::cout << std::endl;

	Bobby.getInfos();
	Tiboo.getInfos();
	std::cout << std::endl;
	
	std::cout << "What the ... Stop it Tiboo !" << std::endl;
	std::cout << std::endl;

	std::cout << "Bobby is upset." << std::endl;
	std::cout << " ---------------- " << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Bobby.attack("Tiboo");
		Tiboo.takeDamage(Bobby.getAtk());
		std::cout << std::endl;
	}
	std::cout << " ---------------- " << std::endl;
	Bobby.attack("Tiboo");
	std::cout << std::endl;
	
	Bobby.getInfos();
	Tiboo.getInfos();
	std::cout << std::endl;

	std::cout << "At least nobody's hurt. Hug each other." << std::endl;
	std::cout << std::endl;
	
	Tiboo.beRepaired(1);
	Tiboo.getInfos();
	std::cout << std::endl;
	
	Bobby.beRepaired(1);
	Bobby.getInfos();
	std::cout << std::endl;

	ClapTrap Tiboo2(Tiboo);
	Tiboo2.getInfos();
	std::cout << std::endl;

	std::cout << "Note : Innofensive but sensitive subjects." << std::endl;
	std::cout << std::endl;
}