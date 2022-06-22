/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 11:57:31 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Trying to initiate Bob at grade 0 and Bobby at grade 151 :" << std::endl;
	std::cout << std::endl;
	
	try {
			Bureaucrat Bob("Bob", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try {
			Bureaucrat Bobby("Bobby", 151);	
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{	
		std::cerr << e.what() << '\n';	
	}
	std::cout << std::endl;
	std::cout << std::endl;


	Bureaucrat John("John", 1);
	try{
		John.decrementGrade();
		John.incrementGrade();
		John.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << John.getName() << " " << e.what() << '\n';
	}
	std::cout << std::endl;

	Bureaucrat Arthur("Arthur", 150);
	try{
		Arthur.incrementGrade();
		Arthur.decrementGrade();
		Arthur.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << Arthur.getName() << " " << e.what() << '\n';
	}
	std::cout << std::endl;



	return 0;
}