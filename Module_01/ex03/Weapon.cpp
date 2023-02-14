/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:23 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/11 00:13:56 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	w_type = str;
}

void	Weapon::setType(std::string type)
{
	this->w_type = type;
}

const std::string	&Weapon::getType()
{
	return(this->w_type);
}
	