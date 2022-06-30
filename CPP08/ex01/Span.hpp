/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:12:53 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/30 10:16:15 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Span{

	public:
	
	Span(unsigned int N) : _N(N);
	Span(Span const & src);
	~Span();

	Span & operator=(Span const & rhs);


	private:
	Span();
	unsigned int _N;
};