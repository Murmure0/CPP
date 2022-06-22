/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 15:10:23 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat John("John", 1);
	Bureaucrat Arthur("Arthur", 150);
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << " -~- SHRUBBERY CREATION Form Test -~- " << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm Shrubbery("Potager", "jardin");
	std::cout << std::endl;

	try{
		Shrubbery.beSigned(Arthur);	}
	catch (Form::GradeTooLowException &e)
	{	std::cerr <<e.what() << std::endl; }

	try{
		Shrubbery.execute(Arthur);	}
	catch (Form::NotSignedException &e)
	{	std::cerr <<e.what() << std::endl; }
	std::cout << std::endl;
	
	Shrubbery.beSigned(John);
	Shrubbery.execute(John);
	try{
		Shrubbery.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << " -~- ROBOTOMY Form Test -~- " << std::endl;
	std::cout << std::endl;
	
	RobotomyRequestForm Robotomy("Robotomy", "Piou");
	std::cout << std::endl;
	
	try{
		Robotomy.beSigned(Arthur);	}
	catch (Form::GradeTooLowException &e)
	{	std::cerr <<e.what() << std::endl; }

	try{
		Robotomy.execute(Arthur);	}
	catch (Form::NotSignedException &e)
	{	std::cerr <<e.what() << std::endl; }
	std::cout << std::endl;
	
	Robotomy.beSigned(John);
	Robotomy.execute(John);
	try{
		Robotomy.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	std::cout << std::endl;
	std::cout << std::endl;

	
	std::cout << " -~- PRESIDENTIAL PARDON Form Test -~- " << std::endl;
	std::cout << std::endl;
	
	PresidentialPardonForm Pardon("Pardon", "Zaphod Jr.");
	std::cout << std::endl;

	try{
		Pardon.beSigned(Arthur);	}
	catch (Form::GradeTooLowException &e)
	{	std::cerr <<e.what() << std::endl; }

	try{
		Pardon.execute(Arthur);	}
	catch (Form::NotSignedException &e)
	{	std::cerr <<e.what() << std::endl; }
	std::cout << std::endl;
	
	Pardon.beSigned(John);
	Pardon.execute(John);
	try{
		Pardon.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}