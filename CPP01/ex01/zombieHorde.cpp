/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:31:50 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 15:17:10 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* firstZ;

	firstZ = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		firstZ[i].setName(name);
	}
	return (firstZ);
}
