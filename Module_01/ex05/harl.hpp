/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:45:06 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/09 02:20:36 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class harl {
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public :
		void complain(std::string level);
};

void temporer(std::string str);

#endif