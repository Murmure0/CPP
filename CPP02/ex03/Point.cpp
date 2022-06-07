/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:46:31 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/07 10:36:03 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
}

Point::Point( float const &x, float const &y ) : _x(x), _y(y)
{
}

Point::Point( const Point& src ) : _x(src._x), _y(src._y)
{
}

Point::~Point()
{
}

float	Point::getX( void ) const
{
	return this->_x.getRawBits();
}

float	Point::getY( void ) const
{
	return this->_y.getRawBits();
}

Point&	Point::operator=( Point const & rhs )
{
	(void) rhs;
	std::cout << "Fixed class are const : no new assignation allowed." << std::endl;
	return *this;
}
