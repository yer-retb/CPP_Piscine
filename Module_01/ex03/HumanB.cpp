/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:15 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/02 01:37:10 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &type)
{
	W_B = &type;
}

std::string	HumanB::getWeapon()
{
	return(W_B->getType());
}

HumanB::HumanB(std::string str) : W_B(NULL)
{
	type = str;
}

void	HumanB::attack()
{
	if (W_B)
		std::cout << type << " attacks with their " << W_B->getType() << std::endl;
	else
		std::cout << "weapon not found " << std::endl;
}