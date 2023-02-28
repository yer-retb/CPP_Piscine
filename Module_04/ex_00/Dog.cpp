/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:19:07 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/24 01:39:41 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor call" << std::endl;
}

Dog::Dog(std::string type) {
	std::cout << "Dog constructor call" << std::endl;
	this->type = type;
}

Dog::Dog(Dog const & other) {
	std::cout << "Dog constructor call" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "Dog destructor call" << std::endl;
}

Dog &Dog::operator= (Dog const &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound (void) const {
	std::cout << "Dog make sound : woof" << std::endl;
}
