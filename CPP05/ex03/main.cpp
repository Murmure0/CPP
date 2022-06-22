/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 15:23:24 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat John("John", 1);
	Bureaucrat Arthur("Arthur", 150);
	std::cout << std::endl;


	Intern randomIntern;
	Form *randomForm;
	std::cout << std::endl;

	std::cout << " -~- 1.Intern : Robot Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("robotomy request", "robotickPiou");
	std::cout << std::endl;
	
	if (randomForm)
	{
		std::cout << " -~- Robot Form Test -~- " << std::endl;
		std::cout << std::endl;

		try{
		randomForm->beSigned(Arthur);	}
		catch (Form::GradeTooLowException &e)
		{	std::cerr <<e.what() << std::endl; }

		try{
			randomForm->execute(Arthur);	}
		catch (Form::NotSignedException &e)
		{	std::cerr <<e.what() << std::endl; }
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		randomForm->execute(John);
		try{
			randomForm->execute(Arthur);	}
		catch (Form::ExecuteGradeTooLowException &e)
		{	std::cerr << e.what() << std::endl;	}
		std::cout << std::endl;
		std::cout << std::endl;

		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;


	std::cout << " -~- 2.Intern : Presidential pardon Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("presidential pardon request", "the bad guy");
	std::cout << std::endl;
	
	if (randomForm)
	{
		std::cout << " -~- Presidential pardon Form Test -~- " << std::endl;
		std::cout << std::endl;

		try{
			randomForm->beSigned(Arthur);	}
		catch (Form::GradeTooLowException &e)
		{	std::cerr <<e.what() << std::endl; }

		try{
			randomForm->execute(Arthur);	}
		catch (Form::NotSignedException &e)
		{	std::cerr <<e.what() << std::endl; }
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		randomForm->execute(John);
		try{
			randomForm->execute(Arthur);	}
		catch (Form::ExecuteGradeTooLowException &e)
		{	std::cerr << e.what() << std::endl;	}
		std::cout << std::endl;
		std::cout << std::endl;


		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
		std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
		std::cout << std::endl;


	std::cout << " -~- 3.Intern : Presidential pardon Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("shrubbery request", "garden");
	std::cout << std::endl;
	
	if (randomForm)
	{
		try{
			randomForm->beSigned(Arthur);	}
		catch (Form::GradeTooLowException &e)
		{	std::cerr <<e.what() << std::endl; }

		try{
			randomForm->execute(Arthur);	}
		catch (Form::NotSignedException &e)
		{	std::cerr <<e.what() << std::endl; }
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		randomForm->execute(John);
		try{
			randomForm->execute(Arthur);	}
		catch (Form::ExecuteGradeTooLowException &e)
		{	std::cerr << e.what() << std::endl;	}
		std::cout << std::endl;
		std::cout << std::endl;

		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;


	std::cout << " -~- 4.Intern : Icecream stand Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("icecream stand request", "garden");
	std::cout << std::endl;

	if (randomForm)
	{
		std::cout << " -~- Form Test -~- " << std::endl;
		std::cout << std::endl;

		try{
			randomForm->beSigned(Arthur);	}
		catch (Form::GradeTooLowException &e)
		{	std::cerr <<e.what() << std::endl; }

		try{
			randomForm->execute(Arthur);	}
		catch (Form::NotSignedException &e)
		{	std::cerr <<e.what() << std::endl; }
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		randomForm->execute(John);
		try{
			randomForm->execute(Arthur);	}
		catch (Form::ExecuteGradeTooLowException &e)
		{	std::cerr << e.what() << std::endl;	}
		std::cout << std::endl;
		std::cout << std::endl;


		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
	
	return 0;
}