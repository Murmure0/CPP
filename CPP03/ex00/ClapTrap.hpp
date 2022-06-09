/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:00 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 10:52:52 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>


class ClapTrap{

public:

ClapTrap();
ClapTrap(std::string name);
ClapTrap(const ClapTrap&);
~ClapTrap();

ClapTrap&	operator=(ClapTrap const & rhs);

void		attack(const std::string& target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
void		getInfos(void);
unsigned int	getAtk();

private :

std::string				_name;
unsigned int			_HitPts;
unsigned int			_EnergyPts;
unsigned int			_AttackDmg;
};

#endif