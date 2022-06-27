/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/27 11:03:24 by mberthet         ###   ########.fr       */
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

	ShrubberyCreationForm Shrubbery("Shrubbery", "Garden");
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
	try{
		Shrubbery.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	Shrubbery.execute(John);
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
	try{
		Robotomy.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	Robotomy.execute(John);
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
	try{
		Pardon.execute(Arthur);	}
	catch (Form::ExecuteGradeTooLowException &e)
	{	std::cerr << e.what() << std::endl;	}
	Pardon.execute(John);
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}