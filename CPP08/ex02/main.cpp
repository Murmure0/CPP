/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:37:47 by mberthet          #+#    #+#             */
/*   Updated: 2022/07/05 11:53:59 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	
	std::list<int> mstack_lst;

	mstack_lst.push_back(5);
	mstack_lst.push_back(17);
	std::cout << mstack_lst.back() << std::endl;
	mstack_lst.pop_back();
	std::cout << mstack_lst.size() << std::endl;
	mstack_lst.push_back(3);
	mstack_lst.push_back(5);
	mstack_lst.push_back(737);
	//[...]
	mstack_lst.push_back(0);
	std::list<int>::iterator it_lst = mstack_lst.begin();
	std::list<int>::iterator ite_lst = mstack_lst.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
	std::cout << *it_lst << std::endl;
	++it_lst;
	}
	return 0;
}