/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:34:06 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/23 16:03:45 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon{

	public :

	Weapon(std::string type);
	~Weapon(void);

	void				setType(std::string newType);
	const std::string	getType(void);

	private :

	std::string _type;
};


#endif