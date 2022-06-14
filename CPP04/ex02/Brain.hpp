/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:48:07 by maelle            #+#    #+#             */
/*   Updated: 2022/06/11 13:48:07 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Brain{

	public :

		Brain();
		Brain(Brain const & src);
		~Brain();

		Brain& operator=(Brain const & rhs);

	protected :

		std::string Ideas[100];
};