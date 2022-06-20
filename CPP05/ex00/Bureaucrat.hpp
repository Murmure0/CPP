/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:04:34 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/16 14:44:36 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat{

	public :

		Bureaucrate();
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const & rhs);

		std::string getName(void);
		std::string getGrade(void);

		void incrementGrade(void);
		void decrementGrade(void);

		class GradeTooHighException : public std::exception{

			public :

				virtual const char* what() const;
		};

		class GradeTooLowException : public std::exception{

			public :

				virtual const char* what() const;
		};

	private :

		const std::string	_name;
		int					_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);