/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:50:49 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 13:55:03 by mberthet         ###   ########.fr       */
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


	std::cout << " -~- SHRUBBERY CREATION Form Test -~- " << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm Shrubbery("Potager", "jardin");
	std::cout << std::endl;

	Shrubbery.beSigned(Arthur);
	Arthur.signForm(Shrubbery);
	Arthur.executeForm(Shrubbery);
	Shrubbery.execute(Arthur);
	std::cout << std::endl;
	
	Shrubbery.beSigned(John);
	John.signForm(Shrubbery);
	John.executeForm(Shrubbery);
	Shrubbery.execute(John);
	Arthur.executeForm(Shrubbery);
	Shrubbery.execute(Arthur);
	std::cout << std::endl;

	std::cout << " -~- ROBOTOMY Form Test -~- " << std::endl;
	std::cout << std::endl;
	
	RobotomyRequestForm Robotomy("Robotomy", "Piou");
	std::cout << std::endl;
	
	Robotomy.beSigned(Arthur);
	Arthur.signForm(Robotomy);
	Arthur.executeForm(Robotomy);
	Robotomy.execute(Arthur);
	std::cout << std::endl;
	
	Robotomy.beSigned(John);
	John.signForm(Robotomy);
	Arthur.executeForm(Robotomy);
	Robotomy.execute(Arthur);
	John.executeForm(Robotomy);
	Robotomy.execute(John);
	std::cout << std::endl;
	
	std::cout << " -~- PRESIDENTIAL PARDON Form Test -~- " << std::endl;
	std::cout << std::endl;
	
	PresidentialPardonForm Pardon("Pardon", "Zaphod Jr.");
	std::cout << std::endl;

	Pardon.beSigned(Arthur);
	Arthur.signForm(Pardon);
	Arthur.executeForm(Pardon);
	Pardon.execute(Arthur);
	std::cout << std::endl;
	
	Pardon.beSigned(John);
	John.executeForm(Pardon);
	Arthur.executeForm(Pardon);
	Pardon.execute(Arthur);
	John.signForm(Pardon);
	John.executeForm(Pardon);
	Pardon.execute(John);
	std::cout << std::endl;
	return 0;
}