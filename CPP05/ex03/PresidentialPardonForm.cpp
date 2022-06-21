/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:32:57 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 16:50:10 by mberthet         ###   ########.fr       */
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
	std::cout << "PresidentialPardonForm " << this->getName() << " destructor." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getStatus() == 0)
			throw Form::NotSignedException();
		else if (executor.getGrade() > this->getGradeToExecute())
			throw Form::ExecuteGradeTooLowException();
		else
		{
			//std::cout << executor.getName() << " can execute the form " << this->getName() << std::endl;
			std::cout << "Big news : " << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "The bureaucrate " << executor.getName() << " can't execute the form " << this->getName() << std::endl;
		std::cerr << e.what() << '\n';
	}
	
}