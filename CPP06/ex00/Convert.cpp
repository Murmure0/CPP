/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:39:48 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/24 15:10:48 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const std::string type) : _toConv(type)
{

	if (type.empty())
		throw Convert::InvalidInput();
	else if (type.size() == 1)
	{
		char ConvMe = _toConv.c_str()[0];
		if (isdigit(ConvMe))
		{
			this->_tInt = static_cast<int>(strtol(_toConv.c_str(), NULL, 10));
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
			if (vTmp > INT_MAX || vTmp < INT_MIN)
				throw Convert::InvalidInput();
			else
			{
				this->_tInt = static_cast<int>(vTmp);
				this->_numType = 1;
			}
		}
		else
		{
			end = NULL;
			double vTmp2;
			vTmp2 = strtod(_toConv.c_str(), &end);
			if (strcmp(end, "f"))
			{
				this->_tDouble = static_cast<double>(vTmp2);
				this->_numType = 3;
			}
			else
			{
 				this->_tFloat = static_cast<float>(vTmp2);
				this->_numType = 2;
			}
		}
	}
}

Convert::Convert( Convert const & src )
{
	this->_toConv = src._toConv;
	this->_numType = src._numType;
	this->_tChar = src._tChar;
	this->_tInt = src._tInt;
	this->_tFloat = src._tFloat;
	this->_tDouble = src._tDouble;
}

Convert::~Convert()
{
}

Convert& Convert::operator=( Convert const & src )
{
	this->_toConv = src._toConv;
	this->_numType = src._numType;
	this->_tChar = src._tChar;
	this->_tInt = src._tInt;
	this->_tFloat = src._tFloat;
	this->_tDouble = src._tDouble;
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
		if (!isprint(this->_tChar))
			throw Convert::NonDisplayable();
		else
			return this->_tChar;

	case 2 :
		this->_tChar =  static_cast<char>(this->_tFloat);
		if (isnan(this->_tFloat) || isinf(this->_tFloat)
			|| (this->_tFloat) > CHAR_MAX || (this->_tFloat) < CHAR_MIN)
			throw Convert::ImpossiblePrint();
		else if (!isprint(this->_tChar))
			throw Convert::NonDisplayable();
		else
			return this->_tChar;

	case 3:
		this->_tChar = static_cast<char>(this->_tDouble);
		if (isnan(this->_tDouble) || isinf(this->_tDouble)
			|| this->_tDouble > CHAR_MAX || this->_tDouble < CHAR_MIN)
			throw Convert::ImpossiblePrint();
		else if (!isprint(this->_tChar))
			throw Convert::NonDisplayable();
		else
			return this->_tChar;
			
		default:
			break;
	}
	return 0;
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
			if (isnan(this->_tFloat) || isinf(this->_tFloat)
				|| this->_tFloat > INT_MAX || this->_tFloat < INT_MIN)
				throw Convert::ImpossiblePrint();
			else
				return this->_tInt;
		case 3:
			this->_tInt = static_cast<int>(this->_tDouble);
			if (isnan(this->_tDouble) || isinf(this->_tDouble)
				|| this->_tDouble > INT_MAX || this->_tDouble < INT_MIN)
				throw Convert::ImpossiblePrint();
			else
				return this->_tInt;

	default:
		break;
	}
	return 0;
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
		break;
	}
	return 0;
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
		break;
	}
	return 0;
}

std::ostream&	operator<<( std::ostream & o, Convert & b )
{
	o << "char : ";
	try{
		 o  << '\'' << b.getChar() << '\'' << std::endl;
	}
	catch(const std::exception &e)
	{
		o << e.what() << std::endl;
	}

	o << "int : ";
	try{
		o << b.getInt() << std::endl;
	}
	catch(const std::exception &e)
	{
		o << e.what() << std::endl;
	}

	o << "float : ";
	try{
		o << b.getFloat() << "f" << std::endl;
	}
	catch(const std::exception &e)
	{
		o << e.what() << std::endl;
	}

	o << "double : ";
	try{
		o << b.getDouble() << std::endl;
	}
	catch(const std::exception &e)
	{
		o << e.what() << std::endl;
	} 
	return o;
}