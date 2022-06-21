/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:31:02 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 13:51:46 by mberthet         ###   ########.fr       */
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
	std::cout << "ShrubberyCreationForm " << this->getName() << "destructor." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getStatus() == 0)
			throw Form::NotSignedException();
		else if (executor.getGrade() > this->getGradeToExecute())
			throw Form::ExecuteGradeTooLowException();
		else
		{
			//std::cout << executor.getName() << " can execute the form " << this->getName() << "." << std::endl;
			std::ofstream outfile(this->getTarget().append(".shrubbery"), std::ios::out);
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
	catch(const std::exception& e)
	{
		std::cerr << "The bureaucrate " << executor.getName() << " can't execute the form " << this->getName() << "." << std::endl;
		std::cerr << e.what() << '\n';
	}
	
}

/*
               ,@@@@@@@,
       ,,,.   ,@@@@@@/@@,  .oo8888o.
    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
   `&%\ ` /%&'    |.|        \ '|8'
       |o|        | |         | |
       |.|        | |         | |
jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_*/