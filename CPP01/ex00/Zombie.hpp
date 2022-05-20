/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:02 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 11:37:55 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie{
public :
Zombie();
~Zombie();

void	announce(void);
void	setName(std::string name);

private :
std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif