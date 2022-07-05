/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:13:22 by mberthet          #+#    #+#             */
/*   Updated: 2022/07/05 14:59:38 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const N)
{
	_N = N;
	_currentIndex = 0;
}

Span::Span(Span const & src)
{
	_N = src._N;
	_currentIndex = src._currentIndex;
	_v = src._v;
}

Span::~Span()
{
}

Span & Span::operator=(Span const & rhs)
{
	_N =rhs._N;
	_currentIndex = rhs._currentIndex;
	_v = rhs._v;
	return *this;
}

unsigned int Span::getN()
{
	return _N;
}

unsigned int Span::getCurrentIndex()
{
	return _currentIndex;
}

void	Span::addNumber(int number)
{
	if (_v.size() >= _N || _currentIndex >= _N)
		throw ContainerFull();
	else
	{
		_currentIndex++;
		_v.push_back(number);
	}
}

void	Span::fillFaster(const std::vector<int>::iterator & begin, const std::vector<int>::iterator & end)
{
	unsigned int i = std::distance(begin, end);
	if (i > _N || i > (_N - _currentIndex))
		throw NotEnoughPlace();
	else
	{
		for(std::vector<int>::iterator it = begin; it < end; it++)
		{
			_v.push_back(*it);
			_currentIndex++;
		}

	}
}

unsigned int	Span::longestSpan()
{
	if (_currentIndex <= 1)
		throw NotEnoughNumber();
	else
	{
		std::vector<int>::iterator it = _v.begin();
		std::vector<int>::iterator ite = _v.end();
		int k = *std::max_element(it, ite) - *std::min_element(it, ite);
		return k;
	}
}

unsigned int Span::shortestSpan()
{
	if (_currentIndex <= 1)
		throw NotEnoughNumber();
	else
	{
		std::vector<int>::iterator it = _v.begin();
		std::vector<int>::iterator ite = _v.end();

		int i = *min_element(it, ite);
		int j = INT_MAX;
		for(std::vector<int>::iterator ita = it; ita != ite; ita++)
		{

			if(*ita < *ita + 1 && *ita > i && *ita < j)
				j = *ita;
		}
		return (j - i);
	}
}

