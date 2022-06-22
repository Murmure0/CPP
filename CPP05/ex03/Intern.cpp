/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:34:16 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 10:38:37 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called." << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern by copy constructor called." << std::endl;
	(void)src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form* Intern::makeForm(const std::string requestName, const std::string target)
{
	std::string reqName[3] = {"robotomy request",
								"presidential pardon request",
								"shrubbery request"};
	
	int x = 0;
	for(x = 0; x < 3; x++)
	{
		if (requestName == reqName[x])
			break;
	}
	switch (x)
	{
		case 0:
			std::cout << "You want a " << requestName << " form on " << target << " ? Take this one." << std::endl;
			return (new RobotomyRequestForm(requestName, target));
		case 1:
			std::cout << "You want a " << requestName << " form on " << target << " ? Take this one." << std::endl;
			return (new PresidentialPardonForm(requestName, target));
		case 2:
			std::cout << "You want a " << requestName << " form on " << target << " ? Take this one." <<std::endl;
			return (new ShrubberyCreationForm(requestName, target));
		default:
			std::cout << "No form named " << requestName << ". Please choose between : \"robotomy request\", \"presidential pardon request\" and \"shrubbery request\"." << std::endl;
			break;
	}
	return (NULL);
}
