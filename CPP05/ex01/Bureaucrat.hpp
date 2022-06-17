/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:21 by maelle            #+#    #+#             */
/*   Updated: 2022/06/17 15:07:53 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Bureaucrat{

	public :

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const & src);

	std::string getName( void );
	int getGrade( void );

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
