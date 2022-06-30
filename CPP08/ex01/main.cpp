/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:12:29 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/30 18:12:49 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span spanData(10);
	Span spanData2(5);

	// std::vector<int> vTooLarge = {5, 6, 89, 98, 100, 12};
	// std::vector<int> vOkay = {5, 6, 89, 98, 100};
	std::vector<int> vTooLarge;
	vTooLarge.push_back(1);
	vTooLarge.push_back(54);
	vTooLarge.push_back(45);
	vTooLarge.push_back(89);
	vTooLarge.push_back(3);
	vTooLarge.push_back(12);
	
	std::vector<int> vOkay;
	vOkay.push_back(1);
	vOkay.push_back(56);
	vOkay.push_back(5);
	vOkay.push_back(12);
	vOkay.push_back(3);

	try {
		for(int i =0; i < 10; i++)
			spanData.addNumber(i);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try{
		std::cout << spanData.shortestSpan() << std::endl;
		std::cout << spanData.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try{
		spanData2.fillFaster(vOkay.begin(), vOkay.end());
		std::cout << "First fillFaster okay ! Test of spanData2 : " << std::endl;
		std::cout << spanData2.shortestSpan() << std::endl;
		std::cout << spanData2.longestSpan() << std::endl;
		spanData2.fillFaster(vTooLarge.begin(), vOkay.end());
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}