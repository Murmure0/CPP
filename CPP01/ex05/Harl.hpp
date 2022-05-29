/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelle <maelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:39:51 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/29 11:41:11 by maelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>
# include <functional>
# include <map>

class Harl
{
	public :
	Harl();
	~Harl();

	void complain(std::string level);

	private :
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};

#endif