/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:28:18 by mberthet          #+#    #+#             */
/*   Updated: 2022/07/05 15:00:39 by mberthet         ###   ########.fr       */
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
		std::cerr << e.what() << std::endl;	}


	std::vector<int> v_lst;

	for(int i = 20; i < 26; i++)
		v_lst.push_back(i);
	for_each(v_lst.begin(), v_lst.end(), display);
	easyfind(v_lst, 21);
	try{
		easyfind(v_lst, 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::deque<int> d_lst;

	for(int i = 100; i < 106; i++)
		d_lst.push_back(i);
	for_each(d_lst.begin(), d_lst.end(), display);
	easyfind(d_lst, 102);
	try{
		easyfind(d_lst, 500);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}