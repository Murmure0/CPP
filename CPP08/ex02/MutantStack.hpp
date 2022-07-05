/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:37:40 by mberthet          #+#    #+#             */
/*   Updated: 2022/07/05 11:52:16 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public :

	MutantStack() :  MutantStack<T, Container>::stack(){};
	MutantStack(MutantStack<T, Container> const & src) : MutantStack<T, Container>::stack(src) {};
	~MutantStack() {};

	MutantStack & operator=(MutantStack const & rhs)
	{
		if (this != &rhs)
			this->MutantStack::stack::operator=(rhs);
		return *this;
	}


	typedef typename Container::iterator		iterator;

	iterator				begin(){ return this->c.begin();}
	iterator				end(){ return this->c.end();}
};