/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:35 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 12:32:33 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	public :

	Form();
	Form(const std::string name, int gSign, int gExec);
	Form(Form const & src);
	~Form();

	Form& operator=(Form const & rhs);


	std::string	getName ( void ) const;
	bool		getStatus ( void ) const;
	int			getGradeToSign( void ) const;
	int			getGradeToExecute( void ) const;

	void		beSigned( Bureaucrat & b );


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


	private :

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream&	operator<<( std::ostream & o, Form & b );
