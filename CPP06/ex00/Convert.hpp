/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:40:09 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/24 15:09:40 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <math.h>

class Convert{

	public :
	Convert(std::string str);
	Convert(Convert const & src);
	~Convert();

	Convert & operator=(Convert const & rhs);

	char	getChar();
	int		getInt();
	float	getFloat();
	double	getDouble();

	class ImpossiblePrint : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("impossible");
		}
	};

	class NonDisplayable : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Non displayable");
		}
	};

	class InvalidInput : public std::exception
	{
		public :
		virtual const char * what() const throw(){
			return("Invalid Input");
		}
	};


	private :

	std::string	_toConv;
	char	_tChar;
	int		_tInt;
	float	_tFloat;
	double	_tDouble;
	int		_numType;
};

std::ostream&	operator<<( std::ostream & o, Convert & b );
