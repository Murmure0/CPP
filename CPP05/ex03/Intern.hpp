/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:34:35 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 15:35:28 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{

	public :

		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern& operator=(Intern const & rhs);

		Form* makeForm(const std::string requestName, const std::string target);
};
