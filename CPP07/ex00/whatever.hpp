/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:25:28 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/29 13:36:18 by mberthet         ###   ########.fr       */
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
	return ((x < y) ? x : y);
}

template<typename T>
T max(T x, T y)
{
	return ((x > y) ? x : y);
}

class Random {

	public:
	
	Random() :_x(11) {}
	Random( int x ) : _x( x ) {}
	~Random() {}
	
	Random const & operator=(Random const & rhs)
	{
		_x = rhs._x;
		return *this;
	}

	int getN(void) {return _x;};

	private:

	int _x; 
 }; 