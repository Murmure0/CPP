/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:43:23 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 12:09:31 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newZ;

	newZ = newZombie("Newz");
	newZ->announce();
	randomChump("Chump");
	delete(newZ);
	return (0);
}
