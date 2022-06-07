/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:25:21 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 16:26:26 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public :

	ScavTrap( std::string name );
	ScavTrap( ScavTrap const& );
	~ScavTrap();

	ScavTrap&	operator=( ScavTrap const & rhs );
	
	void		attack(const std::string& target );
	void 		guardGate( void );
};
