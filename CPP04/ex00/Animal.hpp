/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 15:41:34 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Animal{

public :

	Animal();
	Animal( std::string type );
	Animal( Animal const & );
	~Animal();

	Animal& operator=( Animal const & );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

protected :
	std::string		_type;
};