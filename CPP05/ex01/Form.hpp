/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:35:35 by maelle            #+#    #+#             */
/*   Updated: 2022/06/17 23:25:33 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form{

	public :

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

		std::string _name;
		bool isSigned = false;
		const int gradeToSign;
		const int gradeToExecute;
};