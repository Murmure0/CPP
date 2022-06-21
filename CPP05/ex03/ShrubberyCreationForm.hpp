/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:31:30 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 14:23:11 by mberthet         ###   ########.fr       */
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
