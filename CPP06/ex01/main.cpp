/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:11:10 by maelle            #+#    #+#             */
/*   Updated: 2022/06/28 10:55:31 by mberthet         ###   ########.fr       */
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
}