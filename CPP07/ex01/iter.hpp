/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:46 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 14:54:58 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *tab, size_t lenght, void (*f)(T&))
{
	for (size_t i =0; i < lenght; i++)
	{
		(*f)(tab[i]);
	}
}

template<typename T>
void fUp(T& x){
	std::cout << x << std::endl;
}
