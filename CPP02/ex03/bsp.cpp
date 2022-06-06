/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:47:10 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 15:49:51 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float vect_prod(Point x, Point point)
{
	float ret = ((float)x.getX() * (float)point.getY()) - ((float)x.getY() * (float)point.getX());
	return ret;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point ab((a.getX() - b.getX()), (a.getY() - b.getY()));
	Point bc((b.getX() - c.getX()), (b.getY() - c.getY()));
	Point ca((c.getX() - a.getX()), (c.getY() - a.getY()));
	Point ap((a.getX() - point.getX()), (a.getY() - point.getY()));
	Point bp((b.getX() - point.getX()), (b.getY() - point.getY()));
	Point cp((c.getX() - point.getX()), (c.getY() - point.getY()));

	float ret_ap = vect_prod(ab, ap);
	float ret_bp = vect_prod(bc, bp);
	float ret_cp = vect_prod(ca, cp);

	std::cout << " Produit vectoriel ab * ap = " << ret_ap << std::endl;
	std::cout << " Produit vectoriel bc * bp = " << ret_bp << std::endl;
	std::cout << " Produit vectoriel ca * cp = " << ret_cp << std::endl;

	if ((ret_ap > 0 && ret_bp > 0 && ret_cp > 0) || (ret_ap < 0 && ret_bp < 0 && ret_cp < 0))
		return true;
	else
		return false;
}
