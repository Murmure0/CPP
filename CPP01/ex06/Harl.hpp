/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:39:51 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/31 16:03:35 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>
# include <functional>
# include <string>
# include <sstream>

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