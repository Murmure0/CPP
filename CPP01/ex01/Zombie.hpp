/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:17:13 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/20 13:53:30 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
public:

Zombie(void);
~Zombie(void);

void	setName(std::string name);
void	announce(void);

private:
std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif