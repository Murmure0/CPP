/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 12:40:05 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Arthur("Arthur", 101);
	std::cout << std::endl;

	std::cout << " -~- Test Form -~- " << std::endl;
	Form IceCream("New Ice_cream stand", 100, 50);
	std::cout << std::endl;
	
	std::cout << IceCream << std::endl;

	try {
		IceCream.beSigned(Arthur);
	}
	catch (Form::GradeTooLowException &e)
	{	std::cerr <<e.what() << std::endl; }
	std::cout << std::endl;

	Arthur.incrementGrade();
	std::cout << std::endl;

	try {
		IceCream.beSigned(Arthur);
	}
	catch (Form::GradeTooLowException &e)
	{	std::cerr <<e.what() << std::endl; }
	std::cout << std::endl;
	
	std::cout << IceCream << std::endl;
	std::cout << std::endl;
	
	return 0;
}