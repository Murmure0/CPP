/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:13:22 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/30 18:12:35 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	_N = N;
	_tab = new int[N]();
	_currentIndex = 0;
}

Span::Span(Span const & src)
{
	_N = src._N;
	_currentIndex = src._currentIndex;
	delete _tab;
	_tab = new int[_N];
	for(unsigned int i =0; i < _N; i++)
	{
		_tab[i] =src._tab[i];
	}
}

Span::~Span()
{
	delete [] _tab;
}

Span & Span::operator=(Span const & rhs)
{
	_N =rhs._N;
	_currentIndex = rhs._currentIndex;
	delete _tab;
	_tab = new int[_N];
	for(unsigned int i =0; i < _N; i++)
	{
		_tab[i] =rhs._tab[i];
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (_currentIndex >= _N)
		throw ContainerFull();
	else
	{
		_tab[_currentIndex] = number;
		_currentIndex++;
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
			std::cout << "pouet : "<< *it << std::endl;
			_tab[_currentIndex] = *it;
			_currentIndex++;
		}

	}
}

unsigned int min(unsigned int x, unsigned int y)
{
	return ((x < y) ? x : y);
}

unsigned int max(unsigned int x, unsigned int y)
{
	return ((x > y) ? x : y);
}

unsigned int	Span::shortestSpan()
{
	if (_currentIndex <= 1)
		throw NotEnoughNumber();
	else
	{
		int tmp1;
		int tmp2;
		int minV = INT_MAX;
		int minV2 = INT_MAX;

		for (unsigned int i = 0; i < (_currentIndex - 1); i++)
		{
			tmp1 = min(_tab[i], _tab[i + 1]);
			if (tmp1 < minV)
				minV = tmp1;
		}
		for (unsigned int i = 0; i < (_currentIndex - 1); i++)
		{
			if (_tab[i] != minV)
			{
				tmp2 = min(_tab[i], _tab[i + 1]);
				if (tmp2 < minV2)
					minV2 = tmp2;
			}
		}
		return (minV2 - minV);
	}
}

unsigned int	Span::longestSpan()
{
	if (_currentIndex <= 1)
		throw NotEnoughNumber();
	else
	{
		int tmp1;
		int tmp2;
		int minV = INT_MAX;

		for (unsigned int i = 0; i < (_currentIndex - 1); i++)
		{
			tmp1 = min(_tab[i], _tab[i + 1]);
			if (tmp1 < minV)
				minV = tmp1;
		}
		for (unsigned int i = 0; i < (_currentIndex - 1); i++)
		{
			tmp2 = max(_tab[i], _tab[i + 1]);
		}
		return (tmp2 - minV);
	}
}

