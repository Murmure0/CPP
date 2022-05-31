/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:35:37 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 15:47:21 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{

public :

HumanB(std::string name);
~HumanB();

void	attack();
void	setWeapon(Weapon &weapon);

private :

std::string	_name;
Weapon*		_W;
};

#endif