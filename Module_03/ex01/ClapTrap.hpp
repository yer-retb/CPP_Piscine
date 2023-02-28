/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:34:19 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/18 01:51:13 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	protected :
		std::string Name;
		unsigned int hit_p;
		unsigned int energy_p;
		unsigned int attack_damege;

	public : 

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap (const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage (unsigned int amout);
		void beRepaired (unsigned int amout);
};

#endif