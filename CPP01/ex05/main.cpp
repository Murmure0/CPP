/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:41:03 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/30 10:35:28 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl one;

	one.complain("DEBUG");
	one.complain("INFO");
	one.complain("WARNING");
	one.complain("ERROR");

	one.complain("hello");
	one.complain("");
	one.complain("123 456 789 ;");
}