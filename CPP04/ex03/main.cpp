/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:45:09 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/20 11:20:20 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	std::cout << " -~-***-~- Everything-is-okay tests -~-***-~- " << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << " -~-***-~- Everything-went-wrong tests -~-***-~- " << std::endl;
	std::cout << std::endl;

	std::cout << "Creating empty materia : " << std::endl;
	tmp = src->createMateria("");
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "Using wrong index : " << std::endl;	
	std::cout << "- to use : " << std::endl;
	me->use(-1, *bob);
	me->use(2, *bob);
	me->use(5, *bob);
	std::cout << std::endl;

	me->unequip(0);
	me->unequip(1);
	std::cout << std::endl;


	std::cout << "- using after unequip : " << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	std::cout << "- to unequip : " << std::endl;
	me->unequip(-1);
	me->unequip(0);
	std::cout << std::endl;

	std::cout << "- to use a materia without ever learning one : " << std::endl;
	bob->use(0, *me);

	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << " -~-***-~- Verify deep copy -~-***-~- " << std::endl;
	std::cout << std::endl;

	MateriaSource src1;
	MateriaSource src2;
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

	Character bobby("Bobby");
	Character frank("Frank");
	std::cout << std::endl;

	AMateria* tmp2;
	tmp2 = src2.createMateria("ice");
	bobby.equip(tmp2);
	std::cout << std::endl;
	
	tmp2 = src2.createMateria("cure");
	bobby.equip(tmp2);
	std::cout << std::endl;

	frank = bobby;
	std::cout << std::endl;
	
	frank.use(0, bobby);
	frank.use(1, bobby);
	
	return 0;
}
