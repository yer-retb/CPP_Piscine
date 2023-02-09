/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:25:48 by yer-retb          #+#    #+#             */
/*   Updated: 2023/01/30 00:08:34 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name <<  " Destructor " << std::endl;
}

void Zombie::announce()
{	
	std::cout << this->name <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}