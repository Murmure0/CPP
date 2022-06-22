/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:33:13 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 13:29:33 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"


class PresidentialPardonForm : public Form{

	public :

	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const std::string name, const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
};