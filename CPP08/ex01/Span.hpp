/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:12:53 by mberthet          #+#    #+#             */
/*   Updated: 2022/07/01 12:38:18 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <algorithm>

class Span{

	public:
	
	Span(unsigned int N);
	Span(Span const & src);
	~Span();

	Span & operator=(Span const & rhs);

	unsigned int getN();
	unsigned int getCurrentIndex();

	void			addNumber(int number);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			fillFaster(const std::vector<int>::iterator & begin, const std::vector<int>::iterator & end);

	class ContainerFull : public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return("Container is full.");
			}
	};

	class NotEnoughNumber : public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return("Not enough variable in the container : impossible to calculate any span.");
			}
	};

	class NotEnoughPlace : public std::exception{
		public:
			virtual const char* what() const throw()
			{
				return("Not enough place in the container : impossible to include this range of values.");
			}
	};

	private:

	std::vector<int> _v;
	unsigned int _N;
	unsigned int _currentIndex;

	Span();
};