/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:42 by maelle            #+#    #+#             */
/*   Updated: 2022/06/27 10:52:27 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Basic"),_isSigned(false), _gradeToSign(100),_gradeToExecute(50)
{
}

Form::Form(const std::string name, int gSign, int gExec) : _name(name), _isSigned(false), _gradeToSign(gSign), _gradeToExecute(gExec)
{
	std::cout << "Construct Form : " << _name << std::endl;
}

Form::Form(Form const & src) : _name(src._name), _isSigned(src._isSigned) ,_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Construt by copy Form : " << _name << std::endl;
}

Form::~Form()
{
	std::cout << "Destruction of Form : " << this->getName() << std::endl;
}

Form& Form::operator=(Form const & rhs)
{
	(void)rhs;
	std::cout << "Warning: can't modify name and grades (const variable)." << std::endl;
	return *this;
}

std::string Form::getName( void ) const
{
	return this->_name;
}

bool Form::getStatus( void ) const
{
	return this->_isSigned;
}

int Form::getGradeToSign( void ) const
{
	return  this->_gradeToSign;
}
int Form::getGradeToExecute( void ) const
{
	return  this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > this->getGradeToSign())
	{
		b.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_isSigned = true;
		b.signForm(*this);
	}
}

std::ostream&	operator<<( std::ostream & o, Form & b )
{
	o << "Form : " << b.getName() << std::endl;
	o << "Signed : " << b.getStatus() << std::endl;
	o << "Grade to sign : " << b.getGradeToSign() << " | Grade to Execute : " << b.getGradeToExecute() << std::endl;
	return o;
}
