/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:39:48 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/23 15:18:53 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const std::string type) : _toConv(type)
{

	if (type.length() == 1)
	{
		char *end;
		char ConvMe = _toConv.c_str()[0];
		if (isdigit(ConvMe))
		{
			this->_tInt = strtol(_toConv.c_str(), &end, 10);
			this->_numType = 1;
		}
		else
		{
			this->_tChar = ConvMe;
			this->_numType = 0;
		}
	}
	else 
	{
		char *end;
		long vTmp;
		vTmp = strtol(_toConv.c_str(), &end, 10);
		if (!end)
		{
			this->_tInt = vTmp;
			this->_numType = 1;
		}
		else
		{
			end = NULL;
			double vTmp2;
			vTmp2 = strtod(_toConv.c_str(), &end);
			if (strcmp(end, "f"))
			{
				this->_tDouble = vTmp2;
				this->_numType = 3;
			}
			else
			{
 				this->_tFloat = vTmp2;
				this->_numType = 2;
			}
		}
	}
}

Convert::Convert( Convert const & src ) : _toConv(src._toConv)
{
}

Convert::~Convert()
{
}

Convert& Convert::operator=( Convert const & src )
{
	this->_toConv = src._toConv;
	return *this;
}

char Convert::getChar()
{
	switch (this->_numType)
	{
		case 0 :
			return this->_tChar;
		case 1 :
			this->_tChar =  static_cast<char>(this->_tInt);
			if (this->_tChar < 33 || this->_tChar > 126)
				throw Convert::NonDisplayable();
			else
				return this->_tChar;
		case 2 :
			this->_tChar =  static_cast<char>(this->_tFloat);
			return this->_tChar;
		case 3:
			this->_tChar = static_cast<char>(this->_tDouble);
			return this->_tChar;
	default:
		return 'x';
	}
}

int Convert::getInt()
{
	switch (this->_numType)
	{
		case 0 :
			this->_tInt =  static_cast<int>(this->_tChar);
			return this->_tInt;

		case 1 :
			return this->_tInt;

		case 2 :
			this->_tInt =  static_cast<int>(this->_tFloat);
			return this->_tInt;
		case 3:
			this->_tInt = static_cast<int>(this->_tDouble);
			return this->_tInt;

	default:
		return 0;
	}
}

float Convert::getFloat()
{
	switch (this->_numType)
	{
		case 0 :
			this->_tFloat =  static_cast<float>(this->_tChar);
			return this->_tFloat;

		case 1 :
			this->_tFloat = static_cast<float>(this->_tInt);
			return this->_tFloat;

		case 2 :
			return this->_tFloat;
		case 3:
			this->_tFloat =  static_cast<float>(this->_tDouble);
			return this->_tFloat;
			
	default:
		return 0;
	}
}

double Convert::getDouble()
{
	switch (this->_numType)
	{
		case 0 :
			this->_tDouble = static_cast<double>(this->_tChar);
			return this->_tDouble;

		case 1 :
			this->_tDouble = static_cast<double>(this->_tInt);
			return this->_tDouble;

		case 2 :
			this->_tDouble = static_cast<double>(this->_tFloat);
			return this->_tDouble;
		case 3:
			return this->_tDouble;
			
	default:
		return 0;
	}
}

std::ostream&	operator<<( std::ostream & o, Convert & b )
{
	o << "char : ";
	try{
		 o << "\'" << b.getChar() << "\'" << std::endl;
	}
	catch(const std::exception &e)
	{
		o << e.what() << std::endl;
	}

	o << "int : " << b.getInt() << std::endl;
	o << "float : " <<  b.getFloat()<< "f" << std::endl;
	o << "double : " << b.getDouble();
	return o;
}