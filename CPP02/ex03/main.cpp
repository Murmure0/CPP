/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:25:18 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/06 15:43:15 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point const a(2,2);
	Point const b(5,4);
	Point const c(5,1);
	Point const inside_point(4,2);
	Point const outside_point(1,1);
	Point const side_point(5,3);
	Point const vertex_point(2,2);
	// Point const a(2,2);
	// Point const b(5,4);
	// Point const c(1,3);
	// Point const inside_point(4,2);
	// Point const outside_point(1,1);
	// Point const side_point(3,1);
	// Point const vertex_point(2,2);

	std::cout << "Inside :" << bsp(a, b, c, inside_point) << std::endl;
	std::cout << "Outside :" << bsp(a, b, c, outside_point) << std::endl;
	std::cout << "Side :" << bsp(a, b, c, side_point) << std::endl;
	std::cout << "Vertex : " << bsp(a, b, c, vertex_point) << std::endl;
}
