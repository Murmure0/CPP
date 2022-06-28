/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:45:14 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/28 17:23:54 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array{

	public :

	Array<T>(): _tab(new <T>[]), _lenght(0) {};
	
	Array(unsigned int n) : _tab(new <T>[n] = 0), _lenght(n) {};
	
	Array<T>(Array<T> const & src){
		
		_lenght = src._lenght;

		_tab = new Array<T>[_lenght];
		for(int i = 0; i < _lenght, i++)
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
		_tab = newArray<T>[_lenght];
		for(int i = 0; i < _lenght, i++)
		{
			_tab[i] = src._tab[i];
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