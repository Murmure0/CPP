/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:32:18 by maelle            #+#    #+#             */
/*   Updated: 2022/06/21 13:24:26 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"


class RobotomyRequestForm : public Form{

	public :

	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const std::string name, const std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
};