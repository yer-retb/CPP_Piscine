/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:45:13 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/27 20:20:23 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

	private:
		std::string ideas[100];
	
	public:
		Brain(void);
		Brain(Brain const &other);
		~Brain(void);
		Brain &operator=(Brain const &other);
};

#endif