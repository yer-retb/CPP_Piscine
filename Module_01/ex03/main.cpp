/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:04:20 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/07 02:12:29 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
    	Weapon  club = Weapon("crude spiked club");
    	HumanA bob("Bob", club);
    	bob.attack();
    	club.setType("some other type of club");
    	bob.attack();
	}

	{
		Weapon  club = Weapon("AKA");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club : M16");
		jim.attack();
	}

	return 0;
}
