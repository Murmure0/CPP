/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:31 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/20 10:32:21 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	std::cout << std::endl;

	const Animal* random_meta = new Animal("random animal");
	std::cout << std::endl;

	const Animal* j = new Dog();
	std::cout << std::endl;

	const Animal* i = new Cat();
	std::cout << std::endl;


	std::cout << "Type du chien : " << j->getType() << " " << std::endl;
	std::cout << "Type du chat : " << i->getType() << " " << std::endl;
	std::cout << std::endl;

	const Animal* m = new Dog("Yorkshire");
	std::cout << std::endl;

	const Animal* n = new Cat("Siamois");
	std::cout << std::endl;

	std::cout << m->getType() << " " << std::endl;
	std::cout << n->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Sound time : " << std::endl;
	i->makeSound();
	j->makeSound();
	m->makeSound();
	n->makeSound();
	meta->makeSound();
	random_meta->makeSound();
	std::cout << std::endl;
	
	std::cout << "Wrong animal : " << std::endl;
	const WrongAnimal *k = new WrongAnimal();
	std::cout << std::endl;

	const WrongAnimal *l = new WrongCat();
	std::cout << std::endl;

	const WrongAnimal *p = new WrongCat("Frog");
	std::cout << std::endl;

	std::cout << "Type du wrong animal : " <<  k->getType() << " " << std::endl;
	std::cout << "Type du wrong cat : "<< l->getType() << " " << std::endl;
	std::cout << "Type du wrong cat \"frog\" : "<< p->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Sound time : " << std::endl;
	k->makeSound();
	l->makeSound();
	p->makeSound();
	std::cout << std::endl;

	delete meta;
	delete random_meta;
	delete i;
	delete j;
	std::cout << std::endl;
	
	delete m;
	delete n;
	std::cout << std::endl;

	delete k;
	delete l;
	delete p;

	return 0;
}
