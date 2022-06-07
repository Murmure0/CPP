/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:23 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:21:19 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FixedPtvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int value ) : _FixedPtvalue(value << _fract)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float value ) : _FixedPtvalue( int(roundf(value * (1 <<_fract))) )
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed& Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs)
		this->_FixedPtvalue = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	this->_FixedPtvalue = raw;
	return ;
}

int Fixed::getRawBits( void ) const{
	return this->_FixedPtvalue;
}

float Fixed::toFloat( void ) const
{
	return float(this->_FixedPtvalue) / ( 1 << _fract);
}

int Fixed::toInt( void ) const
{
	return (this->_FixedPtvalue >> _fract);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
