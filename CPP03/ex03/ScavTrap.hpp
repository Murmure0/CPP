/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:25:21 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/09 11:28:32 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

	public :

	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const& );
	~ScavTrap();

	ScavTrap&	operator=( ScavTrap const & rhs );
	
	void		attack(const std::string& target );
	void 		guardGate( void );
};
