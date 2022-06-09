/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 10:59:36 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	/* Verifiying ClapTrap is still working properly */
	
	std::cout << "CLAPTRAP TEST :" << std::endl;
	std::cout << std::endl;

	ClapTrap Bobby("Bobby");
	Bobby.getInfos();
	std::cout << std::endl;

	ClapTrap Bobby2(Bobby);
	Bobby2.getInfos();
	std::cout << std::endl;

	ClapTrap Tiboo("Tiboo");
	Tiboo.getInfos();
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
	std::cout << std::endl;
	std::cout << std::endl;

	/* ScavTrap test : */

	std::cout << "SCAVTRAP TEST : Let's try something new..." << std::endl;
	std::cout << std::endl;

	ScavTrap Rex("Rex");
	std::cout << std::endl;

	ScavTrap RexBis(Rex);
	RexBis.getInfos();
	std::cout << std::endl;

	ScavTrap Brutus("Brutus");
	std::cout << std::endl;

	std::cout << "Rex, don't move, keep the house and don't let the other go away." << std::endl;
	Rex.guardGate();
	std::cout << std::endl;

	std::cout << "Brutus approach the door." << std::endl;
	std::cout << std::endl;
	std::cout << " ---------------- " << std::endl;

	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	Rex.attack("Brutus");
	Brutus.takeDamage(Rex.getAtk());
	std::cout << " ---------------- " << std::endl;
	std::cout << std::endl;

	Rex.getInfos();
	Brutus.getInfos();
	std::cout << std::endl;
	
	Rex.beRepaired(10);
	Brutus.beRepaired(10);
	std::cout << std::endl;

	Rex.getInfos();
	Brutus.getInfos();
	std::cout << std::endl;

	std::cout << "Note : Good gate keeper." << std::endl;
	std::cout << std::endl;
}