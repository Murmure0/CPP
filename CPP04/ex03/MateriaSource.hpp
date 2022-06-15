/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:55:16 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/15 10:49:41 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

	public :
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource const & rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private :

		AMateria* _knownMateria[4];
};