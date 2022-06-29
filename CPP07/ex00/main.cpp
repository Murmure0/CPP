/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:11:36 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/29 13:36:26 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	Random yes(2);
	Random no(5);

	::swap<int>( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap<std::string>(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl;
	std::cout << std::endl;

	std::cout << "min (yes, no) : " << ::min(yes.getN(), no.getN()) << std::endl;
	std::cout << "max (yes, no) : " << ::max(yes.getN(), no.getN()) <<std::endl;
	::swap<Random>(yes, no);
	std::cout << "Yes.n : " << yes.getN() << " | No.n : " << no.getN() << std::endl;
	
	return 0;
}
