/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:05:53 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 13:25:57 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a(7);
Fixed b(6);

Fixed bis(b);

Fixed c( 4.755f );
Fixed d( 2.561f );

Fixed i;

const Fixed t(99);
const Fixed u(101);

const Fixed v(99.99f);
const Fixed w(101.101f);

std::cout << "value of a : " << a << std::endl;
std::cout << "value of b : " << b << std::endl;
std::cout << "value of bis : " << bis << std::endl;
std::cout << "value of c : " << c << std::endl;
std::cout << "value of d : " << d << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "value of (a + b) : " << (a + b) << std::endl;
std::cout << "value of (c + d) : " << (c + d) << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "value of (a - b) : " << (a - b) << std::endl;
std::cout << "value of (c - d) : " << (c - d) << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "value of (a * b) : " << (a * b) << std::endl;
std::cout << "value of (c * d) : " << (c * d) << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "value of (a / b) : " << (a / b) << std::endl;
std::cout << "value of (c / d) : " << (c / d) << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "Is a < b : " << (a < b) << std::endl;
std::cout << "Is a > b : " << (a > b) << std::endl;
if (a > b)
	std::cout << "A is bigger than b." << std::endl;
else
	std::cout << "B is bigger than A." << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "Is bis < b : " << (bis < b) << std::endl;
std::cout << "Is bis > b : " << (bis > b) << std::endl;
std::cout << "Is bis <= b : " << (bis <= b) << std::endl;
std::cout << "Is bis >= b : " << (bis >= b) << std::endl;
if (bis > b)
	std::cout << "bis is bigger than b." << std::endl;
else if (bis < b)
	std::cout << "b is bigger than bis." << std::endl;
else if (bis >= b || bis <= b)
	std::cout << "bis is equal to b." << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "Is bis == a : " << (bis == a) << std::endl;
std::cout << "Is bis == b : " << (bis == b) << std::endl;
if (bis == a)
	std::cout << "bis is equal to a." << std::endl;
else if (bis == b)
	std::cout << "bis is equal to b." << std::endl;

std::cout << " ---- " << std::endl;

std::cout << "Is bis != b : " << (bis != b) << std::endl;
std::cout << "Is bis != a : " << (bis != a) << std::endl;
if (bis != a)
	std::cout << "bis is not equal to a." << std::endl;
else if (bis != b)
	std::cout << "bis is not equal to b." << std::endl;

std::cout << " ---- " << std::endl;
std::cout << "Fixed i = "<< i << std::endl;
std::cout << "Fixed ++i = "<< ++i << std::endl;
std::cout << "Fixed i = "<< i << std::endl;
std::cout << "Fixed i++ = "<< i++ << std::endl;
std::cout << "Fixed i = "<< i << std::endl;
std::cout << " ---- " << std::endl;
i.setRawBits(2 << 8);
std::cout << "Fixed i = "<< i << std::endl;
std::cout << "Fixed --i = "<< --i << std::endl;
std::cout << "Fixed i = "<< i << std::endl;
std::cout << "Fixed i-- = "<< i-- << std::endl;
std::cout << "Fixed i = "<< i << std::endl;
std::cout << " ---- " << std::endl;
std::cout << "Max value between a (" << a << ") and b (" << b << ") is : " << Fixed::max(a, b) << std::endl;
std::cout << "Min value between c (" << c << ") and d (" << d << ") is : " << Fixed::min(c, d) << std::endl;
std::cout << " ---- " << std::endl;
std::cout << " Const classes :" << std::endl;
std::cout << "Max value between t (" << t << ") and u (" << u << ") is : " << Fixed::max(t, u) << std::endl;
std::cout << "Min value between v (" << v << ") and w (" << w << ") is : " << Fixed::min(v, w) << std::endl;



return 0;
}
