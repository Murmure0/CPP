/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:40:09 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/23 15:11:21 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Convert{

	public :
	Convert(); //obligatoire ?
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

	private :

	std::string	_toConv;
	char	_tChar;
	int		_tInt;
	float	_tFloat;
	double	_tDouble;
	int		_numType;
};

std::ostream&	operator<<( std::ostream & o, Convert & b );
