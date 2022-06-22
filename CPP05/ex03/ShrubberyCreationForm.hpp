/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:31:30 by maelle            #+#    #+#             */
/*   Updated: 2022/06/22 14:17:13 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form{

	public :

	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const std::string name, const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;

};