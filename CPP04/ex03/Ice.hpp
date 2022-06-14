/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:14:03 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 16:10:55 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {

	public :
		Ice();
		Ice(Ice const & src);
		~Ice();

		Ice& operator=(Ice const & rhs);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};
