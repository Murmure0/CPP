/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:32:57 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 14:21:23 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("default", 25, 5, target)
{
	std::cout << "Default PresidentialPardonForm created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const std::string target) : Form(name, 25, 5, target)
{
	std::cout << "PresidentialPardonForm " << name << " created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
	std::cout << "PresidentialPardonForm constructor by copy used on " << src.getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm " << this->getName() << "destructor." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
		std::cout << "Big news : " << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}