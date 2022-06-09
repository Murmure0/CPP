/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 15:28:45 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog : public Animal {

public :

	Dog();
	Dog( std::string type );
	Dog( Dog const & );
	~Dog();

	Dog& operator=( Dog const & );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

protected :
	std::string		_type;
};