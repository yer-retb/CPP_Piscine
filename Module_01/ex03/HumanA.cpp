/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:09 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/09 02:36:59 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &a) : type(str), W_A(a)
{

}

void	HumanA::attack()
{
		std::cout << type << " attacks with their " << W_A.getType() << std::endl;
}
