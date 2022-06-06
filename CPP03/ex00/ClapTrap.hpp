/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:00 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 21:46:54 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>


class ClapTrap{

public:

ClapTrap(std::string name);
ClapTrap(const ClapTrap&);
~ClapTrap();

ClapTrap&	operator=(ClapTrap const & rhs);

void		attack(const std::string& target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
void		getInfos(void);

private :

std::string	_name;
unsigned int			_HitPts;
unsigned int			_EnergyPts;
unsigned int			_AttackDmg;
};

#endif