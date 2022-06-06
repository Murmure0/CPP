/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:46:05 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 15:04:40 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{

public :
Point();
Point(float const &x, float const &y);
Point(const Point&);
~Point();

float getX(void) const;
float getY(void) const;

Point& operator=(Point const & rhs);

private :

Fixed const _x;
Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);