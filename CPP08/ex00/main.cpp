/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:28:18 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/29 15:14:19 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void display(int i)
{
	std::cout << i << std::endl;
}

int main(){

	std::list<int> lst;

	for(int i = 0; i < 6; i++)
	{
		lst.push_back(i);
	}
	for_each(lst.begin(), lst.end(), display);
	easyfind(lst, 3);
	try{
		easyfind(lst, 10);	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}