/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:46:44 by maelle            #+#    #+#             */
/*   Updated: 2022/06/09 15:37:04 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public :

	DiamondTrap();
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & );
	~DiamondTrap();

	DiamondTrap&	operator=(DiamondTrap const & rhs);

	void			attack( std::string const & target );
	void			whoAmI();
	void			getInfos();
	
private :

	std::string		_name;
};