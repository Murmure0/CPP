/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:25:21 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 14:05:34 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public :

	ScavTrap( std::string name );
	ScavTrap( ScavTrap const& );
	~ScavTrap();

	ScavTrap&	operator=( ScavTrap const & rhs );
	
	void		attack(const std::string& target);
	
	private :


	
};