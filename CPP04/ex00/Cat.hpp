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

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal {

public :

	Cat();
	Cat( std::string type );
	Cat( Cat const & );
	~Cat();

	Cat& operator=( Cat const & );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

protected :
	std::string		_type;
};