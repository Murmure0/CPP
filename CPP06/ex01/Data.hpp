/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:12:20 by maelle            #+#    #+#             */
/*   Updated: 2022/06/28 11:11:11 by mberthet         ###   ########.fr       */
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