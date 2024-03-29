/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:21 by maelle            #+#    #+#             */
/*   Updated: 2022/06/27 10:46:42 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Bureaucrat{

	public :

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const & rhs);

	std::string	getName( void );
	int			getGrade( void );

	void incrementGrade( void );
	void decrementGrade( void );


	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Grade too high, can't be higher than 1.");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return("Grade too low, can't be lower than 150.");
		}
	};


	private :

	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<( std::ostream & o, Bureaucrat & i );
