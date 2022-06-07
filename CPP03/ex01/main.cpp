/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 16:18:55 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	Bobby.takeDamage(Tiboo.getAtk());
	Bobby.getInfos();
	Tiboo.getInfos();
	std::cout << std::endl;
	std::cout << "What the ... Stop it Tiboo !" << std::endl;
	std::cout << std::endl;

	std::cout << "Bobby is furious." << std::endl;
	for (int i = 0; i < 11; i++)
	{
		Bobby.attack("Tiboo");
		Tiboo.takeDamage(Bobby.getAtk());
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

	/* ScavTrap */
	std::cout << "Let's try something new..." << std::endl;
	ScavTrap Rex("Rex");
	ScavTrap RexBis(Rex);
	ScavTrap Brutus("Brutus");
	std::cout << std::endl;
	std::cout << "Rex, don't move, keep the house and don't let the other go away." << std::endl;
	Rex.guardGate();
	std::cout << std::endl;
	std::cout << "Brutus approach the door." << std::endl;
	std::cout << std::endl;
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
	std::cout << std::endl;
	Rex.getInfos();
	Brutus.getInfos();
	Rex.beRepaired(1);
	Brutus.beRepaired(1);
	std::cout << std::endl;
	Rex.getInfos();
	Brutus.getInfos();
	std::cout << std::endl;
	std::cout << "Note : Too violent, destroying subjects. Sorry for the ones who did nothing." << std::endl;
	std::cout << std::endl;

}