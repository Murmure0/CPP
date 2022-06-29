/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:44:48 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/29 13:07:15 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array{

	public :

	Array(): _tab(new T[3]), _lenght(0) {}
	
	Array(unsigned int n) : _tab(new T[n]), _lenght(n) {
		for (unsigned int i = 0; i < n; i++)
			_tab[i] = 123;
	}
	
	Array(Array const & src){
		
		_lenght = src._lenght;

		_tab = new T[_lenght];
		
		for(unsigned int i = 0; i < _lenght; i++)
		{
			_tab[i] = src._tab[i];
		}
	};

	~Array() {
		delete [] _tab;
	};

	Array & operator=(Array const & rhs){
		_lenght = rhs._lenght;
		delete _tab;
		_tab = new T[_lenght];
		for(int i = 0; i < _lenght; i++)
		{
			_tab[i] = rhs._tab[i];
		}
		return *this;
	}

	unsigned int size( void ){
		return _lenght;
	}

	// T getTab( unsigned int i ){
	// 	if(i >= _lenght)
	// 		throw Array::InvalidIdex();
	// 	else
	// 		return _tab[i];
	// }
	
	class InvalidIdex : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Invalid index.");
		}
	};

	T & operator[](unsigned int index)
	{
		if(index >= _lenght)
			throw Array::InvalidIdex();
		else
			return _tab[index];
	}

	
	private:
	
	T *				_tab;
	unsigned int	_lenght;
};
