/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:56:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 16:54:47 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Poppy("Poppy");
	FragTrap PoppyBis(Poppy);
	FragTrap Ju("Ju");

	std::cout << std::endl;
	Poppy.highFivesGuys();
	PoppyBis.highFivesGuys();
	std::cout << std::endl;

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
	PoppyBis.getInfos();
	std::cout << std::endl;
	Ju.beRepaired(1);
	Poppy.beRepaired(1);
	PoppyBis.beRepaired(1);
	std::cout << std::endl;
	Ju.getInfos();
	Poppy.getInfos();
	PoppyBis.getInfos();
	std::cout << std::endl;
}