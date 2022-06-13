/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:31 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/13 17:28:51 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal* zoo[6];

	for(int i = 0; i < 3; i++){
		zoo[i] = new Dog();
		std::cout << std::endl;
	}
		std::cout << std::endl;
	for(int i = 3; i < 6; i++){
		zoo[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
		
	std::cout << "zoo[0] type :" << zoo[0]->getType() << std::endl;
	zoo[0]->makeSound();
	std::cout << "zoo[3] type :" << zoo[3]->getType() << std::endl;
	zoo[3]->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	
	for(int i = 0; i < 6; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;


	std::cout << "-----------------------------" << std::endl;
	std::cout << "VERIF DEEP COPY" << std::endl;
	std::cout << std::endl;

	std::cout << "Cat constructors : " << std::endl;
	Cat* cat = new Cat();
	Cat cat2;
	std::cout << std::endl;
	Animal random;
	std::cout << std::endl;

	{
		std::cout << "COPY TIME " << std::endl;
		std::cout << "TMP : " << std::endl;
		Cat	tmp(*cat);
		tmp = *cat;
		std::cout << std::endl;

		std::cout << "TMP2 : " << std::endl;
		Cat tmp2(cat2);
		tmp2 = cat2;
		std::cout << std::endl;
		
		std::cout << "TMP3 : " << std::endl;
		Animal tmp3(random);
		tmp3 = random;
		tmp3.makeSound();
		std::cout << std::endl;
	}
		std::cout << std::endl;
	std::cout << "Deleting cat, if the deep copy went wrong => double free" << std::endl;
	delete cat;
		std::cout << std::endl;
	std::cout << "Deleting cat2(on the stack)" << std::endl;

	return 0;
}
