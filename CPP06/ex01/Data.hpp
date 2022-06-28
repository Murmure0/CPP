/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:12:20 by maelle            #+#    #+#             */
/*   Updated: 2022/06/24 16:32:34 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>

typedef struct{

	std::string	name;
	std::string	food;
	int			age;
	double		size;

}	Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);