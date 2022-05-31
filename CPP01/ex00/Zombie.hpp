/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:02 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 13:20:07 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

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