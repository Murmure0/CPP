/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 15:28:45 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Cat : public Animal {

	public :

		Cat();
		Cat( std::string type );
		Cat( Cat const & src);
		virtual ~Cat();

		Cat& operator=( Cat const & rhs);

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;

	private :
	
	Brain* _brain;
};