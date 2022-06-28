/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:14 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 16:34:04 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void fUp(char &x)
{
	std::cout << (char)toupper(x) << std::endl;
}

void fCute(std::string &x)
{
	std::cout << x.append("y !") << std::endl;
}

void fIncrease(int &x)
{
	std::cout << x+1 << std::endl;
}

void fDouble(float &x)
{
	std::cout << x*2 << std::endl;
}

void fCube(double &x)
{
	std::cout << x*x << std::endl;
}

int main()
{
	std::cout << "*Test Upper on Char[] : \"hello I love to scream !\"*" << std::endl;
	char tab[] = "hello I love to scream !";
	int i = sizeof(tab);
	::iter<char>(tab, i, fUp);
	std::cout << std::endl;

	std::cout << "*Test Cuty on string tab2[] = {\"bip\", \"bop\", \"I'm a robot\"}*" << std::endl;
	std::string tab2[] = {"bip", "bop", "I'm a robot"};
	i = sizeof(tab2)/sizeof(tab2[0]);
	/*This is because sizeof(array) will return the sum of sizes of pointers corresponding
	to each string. 
	sizeof(array[0]) will return the size of the pointer corresponding to the first string.
	Thus, sizeof(array)/sizeof(array[0]) returns the number of strings.*/
	::iter<std::string>(tab2, i, fCute);
	std::cout << std::endl;

	std::cout << "*Test Increase on int tab3 [] = { 5, 4, 3, 2, 1, 0}*" << std::endl;
	int tab3 [] = { 5, 4, 3, 2, 1, 0};
	i =  sizeof(tab3)/sizeof(tab3[0]);
	::iter<int>(tab3, i,  fIncrease);
	std::cout << std::endl;

	std::cout << "*Test Double on float tab4 [] = {5.1f, 4.2f, 3.3f, 2.4f, 1.5f, 0.6f}*" << std::endl;
	float tab4 [] = {5.1f, 4.2f, 3.3f, 2.4f, 1.5f, 0.6f};
	i =  sizeof(tab4)/sizeof(tab4[0]);
	::iter<float>(tab4, i, fDouble);
	std::cout << std::endl;
	
	std::cout << "*Test Cube on double tab5[] = {2.2, 4.4, 6.6, 8.8, 10.1}*" << std::endl;
	double tab5[] = {2.2, 4.4, 6.6, 8.8, 10.1};
	i =  sizeof(tab5)/sizeof(tab5[0]);
	::iter<double>(tab5, i, fCube);

	return 0;
}