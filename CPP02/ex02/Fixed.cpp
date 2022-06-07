/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:23 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:27:20 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FixedPtvalue(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int value ) : _FixedPtvalue(value << _fract)
{
	//std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float value ) : _FixedPtvalue(int(roundf(value * (1 <<_fract))))
{
	//std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}


/* Operateurs arithmetiques */

Fixed&	Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs)
		this->_FixedPtvalue = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed ret;

	ret.setRawBits(this->_FixedPtvalue + rhs._FixedPtvalue);
	return ret;
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed ret;

	ret.setRawBits(this->_FixedPtvalue - rhs._FixedPtvalue);
	return ret;
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed ret;

	ret.setRawBits(float(this->_FixedPtvalue) * rhs._FixedPtvalue  / ( 1 << _fract));
	return ret;
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed ret;

	ret.setRawBits((float(this->_FixedPtvalue)) / (float(rhs._FixedPtvalue)) * 256);
	return ret;
}


/* Operateurs de comparaison */

int		Fixed::operator>( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue > rhs._FixedPtvalue);
}

int		Fixed::operator<( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue < rhs._FixedPtvalue);
}

int		Fixed::operator>=( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue >= rhs._FixedPtvalue);
}

int		Fixed::operator<=( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue <= rhs._FixedPtvalue);
}

int		Fixed::operator==( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue == rhs._FixedPtvalue);
}

int		Fixed::operator!=( Fixed const & rhs ) const
{
	return (this->_FixedPtvalue != rhs._FixedPtvalue);
}


/* Operateur ++/-- */

Fixed&	Fixed::operator++()
{
	this->_FixedPtvalue++;
	return (*this);
}

Fixed&	Fixed::operator++(int)
{
	this->_FixedPtvalue++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->_FixedPtvalue--;
	return (*this);
}

Fixed&	Fixed::operator--(int)
{
	this->_FixedPtvalue--;
	return (*this);
}

/* Fonction min/max */

float	Fixed::min( Fixed &a, Fixed &b )
{
	if (a < b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float	Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a < b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float	Fixed::max( Fixed &a, Fixed &b )
{
	if (a > b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float	Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a > b)
		return(a.toFloat());
	else
		return(b.toFloat());
}


/* Other members functions */

void	Fixed::setRawBits( int const raw )
{
	this->_FixedPtvalue = raw;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return this->_FixedPtvalue;
}

float	Fixed::toFloat( void ) const
{
	return (float(this->_FixedPtvalue) / ( 1 << _fract));
}

int		Fixed::toInt( void ) const
{
	return (this->_FixedPtvalue >> _fract);
}


/* << overload */

std::ostream&	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
