/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:33:35 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/17 22:35:09 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap ach("ach");
	FragTrap mute("mute");
	
	ach.attack("doki");
	ach.takeDamage(5);
	ach.beRepaired(15);

	mute.attack("ela");
	mute.takeDamage(90);
	mute.beRepaired(20);
	mute.highFivesGuys();
}