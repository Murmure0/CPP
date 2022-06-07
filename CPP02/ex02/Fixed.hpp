/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:29:36 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FIXED_HPP
# define _FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

public :

Fixed( void );
Fixed( int const value );
Fixed( float const value );
Fixed( const Fixed& );
~Fixed();


Fixed&	operator=( Fixed const & rhs );

Fixed	operator+( Fixed const & rhs ) const;
Fixed	operator-( Fixed const & rhs ) const;
Fixed	operator*( Fixed const & rhs ) const;
Fixed	operator/( Fixed const & rhs ) const;

int		operator>( Fixed const & rhs ) const;
int		operator<( Fixed const & rhs ) const;
int		operator>=( Fixed const & rhs ) const;
int		operator<=( Fixed const & rhs ) const;
int		operator==( Fixed const & rhs ) const;
int		operator!=( Fixed const & rhs ) const;

Fixed&	operator++();
Fixed&	operator++(int);
Fixed&	operator--();
Fixed&	operator--(int);

static float min( Fixed &a, Fixed &b );
static float min( const Fixed &a, const Fixed &b );
static float max( Fixed &a, Fixed &b );
static float max( const Fixed &a, const Fixed &b );


void	setRawBits( int const raw ) ;
int		getRawBits( void ) const;

float	toFloat( void ) const;
int		toInt( void ) const;


private :

static const int	_fract = 8;
int					_FixedPtvalue;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif