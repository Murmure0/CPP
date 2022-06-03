/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/03 10:57:04 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

# include <iostream>

class Fixed{

public :
Fixed( void );
Fixed(const Fixed&);
~Fixed();

Fixed& operator=(Fixed const & rhs);

void setRawBits(int const raw) ;
int getRawBits(void) const;

private :
int _FixedPtvalue;
static const int _fract = 8;

};

#endif