/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:45:11 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/27 20:20:38 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
 	}
}

Brain::~Brain(void){
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
 	}
	return (*this);
}
