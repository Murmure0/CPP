/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/13 17:31:27 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{

	public :
		Animal();
		Animal( std::string type );
		Animal( Animal const & src);
		virtual ~Animal();

		Animal& operator=( Animal const & rhs);

		std::string		getType( void ) const;
		void			setType(std::string type);
		virtual void	makeSound( void ) const = 0;

	protected :
		std::string		_type;
};