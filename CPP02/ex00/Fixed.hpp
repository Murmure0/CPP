/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:22:09 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

# include <iostream>

class Fixed{

public :

Fixed( void );
Fixed( const Fixed& );
~Fixed( void );

Fixed&	operator=( Fixed const & rhs );

void	setRawBits( int const raw ) ;
int		getRawBits( void ) const;


private :

static const int	_fract = 8;
int					_FixedPtvalue;
};

#endif