/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:40 by maelle            #+#    #+#             */
/*   Updated: 2022/06/09 11:10:55 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

public :
	FragTrap();
	FragTrap( std::string name );
	FragTrap( const FragTrap& );
	~FragTrap();

	FragTrap& operator=(FragTrap& rhs);

	void highFivesGuys(void);
};