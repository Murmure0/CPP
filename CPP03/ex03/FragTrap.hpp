/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:40 by maelle            #+#    #+#             */
/*   Updated: 2022/06/09 11:41:28 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

public :
	FragTrap();
	FragTrap( std::string name );
	FragTrap( const FragTrap& );
	~FragTrap();

	FragTrap& operator=(FragTrap const & rhs);

	void highFivesGuys(void);
};