/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/11 13:56:27 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{

	public :
		Animal();
		Animal( std::string type );
		Animal( Animal const & src);
		virtual ~Animal();

		Animal& operator=( Animal const & rhs);

		std::string		getType( void ) const;
		void			setType(std::string type);
		virtual void	makeSound( void ) const;

	protected :
		std::string		_type;
};