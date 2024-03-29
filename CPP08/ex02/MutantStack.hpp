/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:27:43 by maelle            #+#    #+#             */
/*   Updated: 2022/07/05 15:00:32 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <list>
#include <iostream>
#include <string>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{

	public:

	MutantStack() : MutantStack<T, Container>::stack(){}
	MutantStack(MutantStack<T, Container> & src) : MutantStack<T, Container>::stack(src) {}

	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
	{
		this->MutantStack<T, Container>::stack::operator=(rhs);
		return *this;
	}

	virtual ~MutantStack() {};

	typedef typename Container::iterator iterator;

	iterator	begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};