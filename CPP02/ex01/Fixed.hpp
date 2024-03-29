/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:22:07 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
public :

Fixed( void );
Fixed( const int value );
Fixed( const float value );
Fixed(const Fixed&);
~Fixed( void );

Fixed&	operator=( Fixed const & rhs );

void	setRawBits( int const raw ) ;
int		getRawBits( void ) const;

float	toFloat(void) const;
int		toInt(void) const;


private :

static const int	_fract = 8;
int					_FixedPtvalue;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif