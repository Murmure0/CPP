/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:02 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/19 16:16:38 by mberthet         ###   ########.fr       */
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

private :
std::string _name;
};

#endif