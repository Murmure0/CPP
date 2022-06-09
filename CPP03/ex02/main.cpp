/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 11:10:13 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "FRAGTRAP TEST :" << std::endl;
	std::cout << std::endl;

	FragTrap Poppy("Poppy");
	std::cout << std::endl;

	FragTrap PoppyBis(Poppy);
	PoppyBis.getInfos();
	std::cout << std::endl;

	std::cout << "Poppy looks at the other Poppy." << std::endl;
	Poppy.highFivesGuys();
	std::cout << "Poppy looks back." << std::endl;
	PoppyBis.highFivesGuys();
	std::cout << std::endl;

	FragTrap Ju("Ju");
	std::cout << std::endl;
	std::cout << "Poppy looks at Ju." << std::endl;
	Poppy.highFivesGuys();
	std::cout << std::endl;
	
	Ju.attack("Poppy");
	Poppy.takeDamage(Ju.getAtk());
	Ju.attack("Poppy");
	Poppy.takeDamage(Ju.getAtk());
	Ju.attack("Poppy");
	Poppy.takeDamage(Ju.getAtk());
	Ju.attack("Poppy");
	Poppy.takeDamage(Ju.getAtk());
	Ju.attack("Poppy");
	Poppy.takeDamage(Ju.getAtk());
	std::cout << std::endl;

	Ju.getInfos();
	Poppy.getInfos();
	std::cout << std::endl;

	Ju.beRepaired(10);
	Poppy.beRepaired(10);
	std::cout << std::endl;
	
	Ju.getInfos();
	Poppy.getInfos();
	PoppyBis.getInfos();
	std::cout << std::endl;
}