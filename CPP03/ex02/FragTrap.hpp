/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:40 by maelle            #+#    #+#             */
/*   Updated: 2022/06/07 16:26:30 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

public :
	FragTrap( std::string name );
	FragTrap( const FragTrap& );
	~FragTrap();

	FragTrap& operator=(FragTrap& rhs);

	void highFivesGuys(void);
};