/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/10 11:17:08 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class WrongAnimal
{

	public :
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal& operator=( WrongAnimal const & rhs);

		std::string		getType( void ) const;
		void			setType(std::string type);
		void			makeSound( void ) const;

	protected :
		std::string		_type;
};
