/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:45:09 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/16 13:00:29 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// std::cout << std::endl;

	// src->learnMateria(new Ice());
	// std::cout << std::endl;
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
	
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());
	// std::cout << std::endl;

	// ICharacter* me = new Character("me");
	// ICharacter* bob = new Character("bob");
	// std::cout << std::endl;

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// std::cout << std::endl;

	// me->use(0, *bob);
	// me->use(1, *bob);
	// std::cout << std::endl;
	// std::cout << std::endl;

	// std::cout << "Everything-went-wrong tests : " << std::endl;
	// std::cout << std::endl;

	// std::cout << "Creating empty materia : " << std::endl;
	// tmp = src->createMateria("");
	// me->equip(tmp);

	// std::cout << "Using wrong index " << std::endl;	
	// std::cout << "- to use : " << std::endl;
	// me->use(-1, *bob);
	// me->use(2, *bob);
	// me->use(5, *bob);
	// std::cout << std::endl;

	// me->unequip(0);
	// me->unequip(1);
	// std::cout << std::endl;


	// std::cout << "- using after unequip : " << std::endl;
	// me->use(0, *bob);
	// me->use(1, *bob);
	// std::cout << std::endl;

	// std::cout << "- to unequip : " << std::endl;
	// me->unequip(-1);
	// me->unequip(0);
	// std::cout << std::endl;


	// std::cout << "- to use a materia without ever learning one : " << std::endl;
	// bob->use(0, *me);

	// delete bob;
	// delete me;
	// delete src;

	// Main to verify deep copy :

	MateriaSource src1, src2;
	std::cout << std::endl;
	
	src1.learnMateria(new Ice());
	src1.learnMateria(new Cure());
	src1.learnMateria(new Cure());
	src1.learnMateria(new Cure());
	std::cout << std::endl;
	
	src1.learnMateria(new Cure());
	src1.learnMateria(new Ice());
	std::cout << std::endl;
	
	src2 = src1;
	std::cout << std::endl;

	Character bob("Bob");
	Character frank("Frank");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src2.createMateria("ice");
	bob.equip(tmp);
	std::cout << std::endl;
	
	tmp = src2.createMateria("cure");
	bob.equip(tmp);
	std::cout << std::endl;

	frank = bob;
	std::cout << std::endl;
	
	frank.use(0, bob);
	frank.use(1, bob);
	
	return 0;
}

//cas ou learn materia utilise clone()
/*

	src.learnMateria(new Materia("Ice")); ->memory leak car new Materia n'est stocké nulle part (le clone est stocké)

	------------

	Materia *ice = new Materia("Ice");
	src.learnMateria(ice);
	delete ice; ->ca fonctionne car on a fait une copie avec clone

*/

//cas ou learn materia fait une simple assignation de pointeur
/*

	src.learnMateria(new Materia("Ice")); ->pas de memory leak car deleted a la fin
	
	------------

	Materia *ice = new Materia("Ice");
	src.learnMateria(ice);
	delete ice; ->	on ne peut plus appeler la materia dans la source donc crash
*/