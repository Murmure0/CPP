/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/17 15:31:38 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat John("John", 1);
	std::cout << "John grade increment/decrement :" << std::endl;
	John.incrementGrade();
	John.decrementGrade();
	std::cout << std::endl;

	Bureaucrat Arthur("Arthur", 150);
	std::cout << "Arthur grade decrement/increment :" << std::endl;
	Arthur.decrementGrade();
	Arthur.incrementGrade();
	std::cout << std::endl;

	std::cout << "Trying to initiate Bob at grade 0 and Bobby at grade 151 :" << std::endl;
	Bureaucrat Bob("Bob", 0);
	Bureaucrat Bobby("Bobby", 151);
	std::cout << std::endl;
	return 0;
}