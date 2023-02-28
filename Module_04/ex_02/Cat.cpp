/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:19:35 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:43:12 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor call" << std::endl;
	this->type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat const & other) {
	std::cout << "Cat copy constructor call" << std::endl;
	brain = new Brain;
	*brain = *(other.brain);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor call" << std::endl;
}

Cat &Cat::operator= (Cat const & other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	delete brain;
	brain = new Brain;
	*brain = *(other.brain);
	return (*this);
}

void Cat::makeSound (void) const {
	std::cout << "Cat make sound : meow" << std::endl;
}
