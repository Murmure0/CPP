/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:11:10 by maelle            #+#    #+#             */
/*   Updated: 2022/06/24 16:34:47 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data me;
	uintptr_t scripted_me;
	Data* new_me;

	me.name = "Aby";
	me.food = "pizza & donuts";
	me.age = 18;
	me.size = 1.65;

	std::cout << me.name << std::endl;
	std::cout << me.food << std::endl;
	std::cout << me.age << std::endl;
	std::cout << me.size << std::endl;
	std::cout << std::endl;
	
	scripted_me = serialize(&me);
	new_me = deserialize(scripted_me);

	std::cout << new_me->name << std::endl;
	std::cout << new_me->food << std::endl;
	std::cout << new_me->age << std::endl;
	std::cout << new_me->size << std::endl;
//warning makefile not 98
}