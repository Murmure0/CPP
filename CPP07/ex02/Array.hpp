/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:44:48 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 17:42:59 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//#include "Array.tpp"
#include <iostream>
#include <string>

template<typename T>
class Array{

	public :

	Array<T>(): _tab(new Array<T>[3]), _lenght(0) {};
	
	Array(unsigned int n) : _tab(new Array<T>[n] = 0), _lenght(n) {};
	
	Array<T>(Array<T> const & src){
		
		_lenght = src._lenght;

		_tab = new Array<T>[_lenght];
		
		for(int i = 0; i < _lenght; i++)
		{
			_tab[i] = src._tab[i];
		}
	};

	~Array<T>() {
		delete [] _tab;
	};

	Array<T> const & operator=(Array<T> const & rhs){
		_lenght = rhs._lenght;
		delete _tab;
		_tab = new Array<T>[_lenght];
		for(int i = 0; i < _lenght; i++)
		{
			_tab[i] = rhs._tab[i];
		}
	};

	unsigned int size( void ){
		return _lenght;
	};

	class InvalidIdex : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Invalid index.");
		}
	};

	private:
	
	unsigned int	_lenght;
	T *				_tab;
};
