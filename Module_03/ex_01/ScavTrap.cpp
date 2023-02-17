/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:36:28 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/17 22:11:08 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	hit_p = 100 , energy_p = 50 , attack_damege = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->Name = "Default";
}

ScavTrap::ScavTrap(std::string name) {
	hit_p = 100 , energy_p = 50 , attack_damege = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->Name = name;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}
	
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->Name = other.Name;
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << "Gate keper mode : Active" << std::endl;
}