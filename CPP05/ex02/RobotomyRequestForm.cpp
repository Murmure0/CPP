/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:31:44 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 14:21:47 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("default", 72, 45, target)
{
	std::cout << "Default RobotomyRequestForm created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target) : Form(name, 72, 45, target)
{
	std::cout << "RobotomyRequestForm " << name << " created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
	std::cout << "RobotomyRequestForm constructor by copy used on " << src.getName() << "." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << this->getName() << "destructor." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
if (this->getStatus() == 0)
	{
		executor.executeForm(*this);
		throw Form::NotSignedException();
	}
	else if (executor.getGrade() > this->getGradeToExecute())
	{
		executor.executeForm(*this);
		throw Form::ExecuteGradeTooLowException();
	}
	else
	{
		executor.executeForm(*this);
		std::cout << "*Bruits de perceuse*" << std::endl;
		srand((unsigned int)time(0));

		int i = rand()%2 + 1;
		if (i == 1)
			std::cout << "The target " << this->getTarget() << " has been robotomized." << std::endl;
		else
			std::cout << "Robotomization of target " << this->getTarget() << " has failed." << std::endl; 
	}
}