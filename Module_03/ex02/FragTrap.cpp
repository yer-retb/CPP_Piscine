/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:20:36 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/18 01:47:53 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	hit_p = 100 , energy_p = 100 , attack_damege = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->Name = "Default";
}

FragTrap::FragTrap(std::string name) {
	hit_p = 100 , energy_p = 100 , attack_damege = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
	this->Name = name;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}
	
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->Name = other.Name;
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
}
