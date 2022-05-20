/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:16:46 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 15:21:00 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* firstZ;
	int N = 5;

	firstZ = zombieHorde(N, "Lulu");
	for(int i = 0; i < N; i++)
		firstZ->announce();
	delete [] firstZ;
	return (0);
}