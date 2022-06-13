/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:31 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/11 12:41:41 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* random_meta = new Animal("random animal");
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	const Animal* m = new Dog("Yorkshire");
	const Animal* n = new Cat("Siamois");
	std::cout << std::endl;

	std::cout << m->getType() << " " << std::endl;
	std::cout << n->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	m->makeSound();
	n->makeSound();
	std::cout << std::endl;

	meta->makeSound();
	random_meta->makeSound();
	std::cout << std::endl;
	
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();
	const WrongAnimal *p = new WrongCat("Frog");
	std::cout << std::endl;

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << p->getType() << " " << std::endl;
	std::cout << std::endl;

	k->makeSound();
	l->makeSound();
	p->makeSound();
	std::cout << std::endl;

	delete meta;
	delete random_meta;
	delete i;
	delete j;
	delete k;
	delete l;
	delete m;
	delete n;
	delete p;

	return 0;
}
