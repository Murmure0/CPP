/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:09:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/03 16:44:40 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FIXED_HPP
# define _FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

public :
Fixed( void );
Fixed(int const value );
Fixed(float const value );
Fixed(const Fixed&);
~Fixed();

Fixed&	operator=(Fixed const & rhs);

/*Operateurs arithmetiques*/
Fixed	operator+(Fixed const & rhs) const;
Fixed	operator-(Fixed const & rhs) const;
Fixed	operator*(Fixed const & rhs) const; //may need to return a reference
Fixed	operator/(Fixed const & rhs) const; //idem

/*Operateurs de comparaison*/
int		operator>(Fixed const & rhs) const;
int		operator<(Fixed const & rhs) const;
int		operator>=(Fixed const & rhs) const;
int		operator<=(Fixed const & rhs) const;
int		operator==(Fixed const & rhs) const;
int		operator!=(Fixed const & rhs) const;

 /*Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
la valeur du nombre à virgule fixe d’unité E tel que 1 + E > 1.*/
Fixed&	operator++(); //pre
Fixed&	operator++(int); //post
Fixed&	operator--(); //pre
Fixed&	operator--(int); //post


static float min(Fixed &a, Fixed &b);
static float min(const Fixed &a, const Fixed &b);
static float max(Fixed &a, Fixed &b);
static float max(const Fixed &a, const Fixed &b);


void	setRawBits(int const raw) ;
int		getRawBits(void) const;

float	toFloat(void) const;
int		toInt(void) const;

private :
int		_FixedPtvalue;
static const int _fract = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif