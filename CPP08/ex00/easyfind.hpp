/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:29:28 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/30 10:10:26 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include <iostream>
#include <string>

class NotFound : public std::exception
{
	public :
	virtual const char* what() const throw()
	{
		return("Element not found in the container.");
	}
};

template< typename T>
int easyfind(T const & cont, int x)
{
	typename T::const_iterator it;

	it = find(cont.begin(), cont.end(), x);
	if (it != cont.end())
	{
		std::cout << "Element found in the container: " << *it << std::endl;
		return *it;
	}
	else
	{
		throw (::NotFound());
	}
}


