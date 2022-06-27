/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:31:02 by maelle            #+#    #+#             */
/*   Updated: 2022/06/27 11:08:40 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("default", 145, 137, target)
{
	std::cout << "Default ShrubberyCreationForm created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target) : Form(name, 145, 137, target)
{
	std::cout << "ShrubberyCreationForm " << name << " created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	std::cout << "ShrubberyCreationForm constructor by copy used on " << src.getName() << "." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << this->getName() << " destructor." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
		std::ofstream outfile(this->getTarget().append(".shrubbery").c_str(), std::ios::out);
		if (!outfile.good())
			std::cout << "Creation of the newfile compromised." << std::endl;
		outfile << "							,AAAAAAA," << std::endl;
		outfile << "					,,,.   ,AAAAAAA/AA,  .oo8888o." << std::endl;
		outfile << "				,&\%%&%&&\%,AAAAA/AAAAAA,888888/8o" << std::endl;
		outfile << "				,%&\%&&%&&\%,AAAAAA/AAAAA888888/88'" << std::endl;
		outfile << "				%&&%&%&/%&&\%AAAAAA/ /AAA8888888888'" << std::endl;
		outfile << "				%&&%/ %&\%%&&AAA V /AA' `88888 `/88'" << std::endl;
		outfile << "				`&%  ` /%&'    |.|         |'|8''" << std::endl;
		outfile << "					|o|        | |         | |" << std::endl;
		outfile << "					|.|        | |         | |" << std::endl;
		outfile.close();
		std::cout << "Creation of the file " << this->getTarget().append(".shrubbery") << std::endl;
	}
}
