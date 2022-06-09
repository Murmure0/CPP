/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 14:35:18 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "DIAMONDTRAP TEST :" << std::endl;
	std::cout << std::endl;

	DiamondTrap Lucy("Lucy");
	std::cout << std::endl;
	DiamondTrap LucyBis(Lucy);
	std::cout << std::endl;
	DiamondTrap Bob("Bob");
	std::cout << std::endl;

	Lucy.whoAmI();
	LucyBis.whoAmI();
	Bob.whoAmI();
	std::cout << std::endl;

	Lucy.attack("Bob");
	Bob.takeDamage(Lucy.getAtk());
	std::cout << std::endl;

	Lucy.getInfos();
	Bob.getInfos();
	std::cout << std::endl;

	Lucy.beRepaired(2000);
	Bob.beRepaired(10);
	std::cout << std::endl;

	Lucy.getInfos();
	Bob.getInfos();
	std::cout << std::endl;
}