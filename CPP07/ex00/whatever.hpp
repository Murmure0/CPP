/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:25:28 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 14:25:44 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void swap(T & x, T & y)
{
	T z;

	z = x;
	x = y;
	y = z;
}

template<typename T>
T min(T x, T y)
{
	if (x >= y)
		return y;
	else
		return x;
}

template<typename T>
T max(T x, T y)
{
	if(x <= y)
		return y;
	else
		return x;
}
