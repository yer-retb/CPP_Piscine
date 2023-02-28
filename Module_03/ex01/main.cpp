/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:33:35 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/17 22:16:11 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap ach("ash");
	ScavTrap fuze("fuze");

	
	ach.attack("doki");
	ach.takeDamage(5);
	ach.beRepaired(100);

	std::cout << "\n***************************************\n" << std::endl;
	
	fuze.attack("bandit");
	fuze.takeDamage(50);
	fuze.beRepaired(50);
	fuze.guardGate();
}