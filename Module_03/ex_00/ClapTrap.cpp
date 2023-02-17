/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:34:15 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/17 03:54:19 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_p (10), energy_p (10), attack_damege(0) {
	std::cout << "Default Constructor called" << std::endl;
	this->Name = "Default";
}

ClapTrap::ClapTrap(std::string name) : hit_p (10), energy_p (10), attack_damege(0) {
	std::cout << "Constructor called" << std::endl;
	this->Name = name;
}
ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
	
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = other.Name;
	return(*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hit_p > 0 && this->energy_p > 0)
	{
		this->energy_p -= 1;
		std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->attack_damege << " points of damage !" << std::endl;
	}
}

void  ClapTrap::takeDamage(unsigned int amout)
{
	this->hit_p -= amout; 
	std::cout << "you will take " << amout << " on the damage" << std::endl;
}

void ClapTrap::beRepaired (unsigned int amout)
{
	if (this->hit_p > 0 && this->energy_p > 0)
	{
		this->energy_p -= 1;	
		this->hit_p += amout;
		std::cout << "your hit point are new " << this->hit_p << " on it" << std::endl;
	}
}