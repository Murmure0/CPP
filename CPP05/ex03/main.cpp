/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 16:45:21 by mberthet         ###   ########.fr       */
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

		randomForm->beSigned(Arthur);
		Arthur.signForm(*randomForm);
		Arthur.executeForm(*randomForm);
		std::cout << std::endl;

		randomForm->execute(Arthur);
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		John.signForm(*randomForm);
		John.executeForm(*randomForm);
		randomForm->execute(John);
		Arthur.executeForm(*randomForm);
		randomForm->execute(Arthur);
		std::cout << std::endl;

		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << " -~- 2.Intern : Presidential pardon Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("presidential pardon request", "the bad guy");
	std::cout << std::endl;
	
	if (randomForm)
	{
		std::cout << " -~- Presidential pardon Form Test -~- " << std::endl;
		std::cout << std::endl;

		randomForm->beSigned(Arthur);
		Arthur.signForm(*randomForm);
		Arthur.executeForm(*randomForm);
		std::cout << std::endl;

		randomForm->execute(Arthur);
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		John.signForm(*randomForm);
		John.executeForm(*randomForm);
		randomForm->execute(John);
		Arthur.executeForm(*randomForm);
		randomForm->execute(Arthur);
		std::cout << std::endl;

		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
		std::cout << std::endl;
		std::cout << std::endl;


	std::cout << " -~- 3.Intern : Presidential pardon Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("shrubbery request", "garden");
	std::cout << std::endl;
	
	if (randomForm)
	{
		std::cout << " -~- Form Test -~- " << std::endl;
		std::cout << std::endl;

		randomForm->beSigned(Arthur);
		Arthur.signForm(*randomForm);
		Arthur.executeForm(*randomForm);
		std::cout << std::endl;

		randomForm->execute(Arthur);
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		John.signForm(*randomForm);
		John.executeForm(*randomForm);
		randomForm->execute(John);
		Arthur.executeForm(*randomForm);
		randomForm->execute(Arthur);
		std::cout << std::endl;

		delete randomForm;
	}
	else
	{
		std::cout << "No form created." << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << " -~- 4.Intern : Presidential pardon Form Test -~- " << std::endl;
	std::cout << std::endl;

	randomForm = randomIntern.makeForm("icecream stand request", "garden");
	std::cout << std::endl;

	if (randomForm)
	{
		std::cout << " -~- Form Test -~- " << std::endl;
		std::cout << std::endl;

		randomForm->beSigned(Arthur);
		Arthur.signForm(*randomForm);
		Arthur.executeForm(*randomForm);
		std::cout << std::endl;

		randomForm->execute(Arthur);
		std::cout << std::endl;
		
		randomForm->beSigned(John);
		John.signForm(*randomForm);
		John.executeForm(*randomForm);
		randomForm->execute(John);
		Arthur.executeForm(*randomForm);
		randomForm->execute(Arthur);
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