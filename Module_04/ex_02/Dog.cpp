/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:19:07 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:41:00 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor call" << std::endl;
	this->type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const & other) {
	std::cout << "Dog constructor call" << std::endl;
	brain = new Brain();
	*brain = *(other.brain);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor call" << std::endl;
}

Dog &Dog::operator= (Dog const &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	delete brain;
	brain = new Brain();
	*brain = *(other.brain);
	return (*this);
}

void Dog::makeSound (void) const {
	std::cout << "Dog make sound : woof" << std::endl;
}
