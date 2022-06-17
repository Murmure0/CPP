/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:05 by maelle            #+#    #+#             */
/*   Updated: 2022/06/17 15:44:38 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->_grade = grade;
			std::cout << "Welcome bureaucrat " << this->_name << ", you're at grade " << this->_grade << std::endl; 
		}

	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << this->_name << " : " << e.what() << '\n';
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << this->_name << " : " << e.what() << '\n';
	}
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Byebye Bureaucrat " << this->_name << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src._grade;
	return *this;
}

std::string Bureaucrat::getName( void )
{
	return this->_name;
}

int Bureaucrat::getGrade( void )
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade( void )
{
	try
	{
		std::cout << "Incrementing " << this->getName() << " : " << std::endl;
		int i = this->_grade - 1;
		if (i < 1)
			throw Bureaucrat::GradeTooHighException();
		else
		{

			this->_grade--;
			std::cout << *this << std::endl; 
		}
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << this->getName() << " " << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade( void )
{
	try
	{
		std::cout << "Decrementing " << this->getName() << " : " << std::endl; 
		int i = this->_grade + 1;
		if (i > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->_grade++;
			std::cout << *this << std::endl; 
		}
		
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << this->getName() << " " << e.what() << '\n';
	}
}

std::ostream&	operator<<( std::ostream & o, Bureaucrat & i )
{
	o << i.getName() <<" bureaucrat is grade " << i.getGrade();
	return o;
}
