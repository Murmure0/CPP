/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:51:11 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 11:10:06 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>


Base * generate(void)
{
	Base * newBase;
	srand((unsigned int)time(0));
	int i = rand() % 3;
	switch (i)
	{
		case 0 :
			newBase = new A;
			return (static_cast <Base *>(newBase));
		case 1 :
			newBase = new B;
			return (static_cast <Base *>(newBase));
		case 2 :
			newBase = new C;
			return (static_cast <Base *>(newBase));
		default :
			break;
	}
	return (NULL);
}

void identify(Base* p)
{
	Base * idBase;

	idBase = dynamic_cast<A *>(p);
	if (idBase != NULL)
	{
		std::cout << "By pointer : Class A identify." << std::endl;
		return ;
	}

	idBase = dynamic_cast<B *>(p);
	if (idBase != NULL)
	{
			std::cout << "By pointer : Class B identify." << std::endl;
		return ;
	}

	idBase = dynamic_cast<C *>(p);
	if (idBase != NULL)
	{
			std::cout << "By pointer : Class C identify." << std::endl;
		return ;
	}

	if (idBase == NULL)
		std::cout << "No class identified." << std::endl;
}

void identify(Base& p)
{
	Base idBase;

	try {
		idBase = dynamic_cast<A&>(p);
		std::cout << "Ref : Class A identify." << std::endl;
	}
	catch (std::bad_cast &bc){
	}
	try {
		idBase = dynamic_cast<B&>(p);
		std::cout << "Ref : Class B identify." << std::endl;
	}
	catch (std::bad_cast &bc){
	}
	try {
		idBase = dynamic_cast<C&>(p);
		std::cout << "Ref : Class C identify." << std::endl;
	}
	catch (std::bad_cast &bc){
	}
}

int main()
{
	std::cout << "Generating new random class betwen A, B and C : " << std::endl;
	std::cout << std::endl;
	Base * GuessBase;

	GuessBase = generate();
	identify(GuessBase);
	identify(*GuessBase);
	std::cout << std::endl;

	delete GuessBase;
	return 0;
}
