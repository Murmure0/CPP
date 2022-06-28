/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:14 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 14:52:38 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char tab[] = "bonjour, j'aime crier !";
	int i = sizeof(tab);

	iter(tab, i, fUp<char>(*tab));
}