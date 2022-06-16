/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:31:59 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/16 11:28:26 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

	public :

		Character();
		Character(std::string name);
		Character(Character const &  src);
		~Character();

		Character& operator=(Character const & rhs);

		std::string const & getName() const;
		
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private :

		std::string _name;
		AMateria* _materia[4];
		AMateria* _rejectedMateria[100];
};
