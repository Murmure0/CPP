/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:31 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/11 14:34:12 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal zoo[4];
	const Animal *Dog1 = new Dog();
	const Animal *Dog2 = new Dog();
	const Animal *Cat1 = new Cat();
	const Animal *Cat2 = new Cat();

	zoo[0].setType(Dog1->getType());
	zoo[1].setType(Dog2->getType());
	zoo[2].setType(Cat1->getType());
	zoo[3].setType(Cat2->getType());

	zoo[0].
//	delete [] zoo;

	return 0;
}
