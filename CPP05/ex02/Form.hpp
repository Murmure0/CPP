/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:35 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 14:15:07 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form{

	public :

	Form();
	Form(const std::string name, int gSign, int gExec, const std::string target);
	Form(Form const & src);
	virtual ~Form();

	Form& operator=(Form const & rhs);


	std::string	getName ( void ) const;
	std::string getTarget( void ) const;
	bool		getStatus ( void ) const;
	int			getGradeToSign( void ) const;
	int			getGradeToExecute( void ) const;
	
	void		beSigned( Bureaucrat & b );
	virtual void execute(Bureaucrat const & executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Grade too high.");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Grade too low to sign.");
		}
	};

	class ExecuteGradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Grade too low to execute.");
		}
	};

	class NotSignedException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("The form is not signed.");
		}
	};



	private :

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		const std::string	_target;
};

std::ostream&	operator<<( std::ostream & o, Form & b );
