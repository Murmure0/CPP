/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:32:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 15:47:03 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon club = Weapon("spoon");
		HumanB jim("Jim");

		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("forks");
		jim.attack();
	}
	return 0;
}
