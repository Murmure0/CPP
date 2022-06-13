/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 15:28:45 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public :

	WrongCat();
	WrongCat( std::string type );
	WrongCat( WrongCat const & src);
	~WrongCat();

	WrongCat& operator=( WrongCat const & rhs);
	void	makeSound( void ) const;
};