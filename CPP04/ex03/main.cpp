/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:45:09 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/15 14:10:00 by mberthet         ###   ########.fr       */
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
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	std::cout << "1" << std::endl;
//	IMateriaSource* src2 = new MateriaSource(*(MateriaSource*(src)));
//	*src2 = *src;
	std::cout << "2" << std::endl;
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "3" << std::endl;
	me->equip(tmp);
	std::cout << "4" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "5" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "6" << std::endl;

	*me = *bob;
	delete bob;
	delete me;
	delete src;
	system("leaks ex03");

	return 0;

	// MateriaSource src1, src2;
	// src1.learnMateria(new Ice());
	// src1.learnMateria(new Cure());
	// src1.learnMateria(new Cure());
	// src1.learnMateria(new Cure());
	// src1.learnMateria(new Cure());
	// src1.learnMateria(new Ice());
	// src2 = src1;
	// Character bob("Bob"), frank("Frank");

	// AMateria* tmp;
	// tmp = src2.createMateria("ice");
	// std::cout << "3" << std::endl;
	// bob.equip(tmp);
	// std::cout << "4" << std::endl;
	// tmp = src2.createMateria("cure");
	// bob.equip(tmp);

	// std::cout << "5" << std::endl;
	// frank = bob;
	// frank.use(0, bob);
	// frank.use(1, bob);
	// std::cout << "6" << std::endl;
	

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