/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:14:45 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/14 16:11:10 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {

	public :
		Cure();
		Cure(Cure const  & src);
		~Cure();

		Cure& operator=(Cure const & rhs);

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};