/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:19:35 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/24 01:39:24 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor call" << std::endl;
}

Cat::Cat(std::string type) {
	std::cout << "Cat constructor call" << std::endl;
	this->type = type;
}

Cat::Cat(Cat const & other) {
	std::cout << "Cat constructor call" << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "Cat destructor call" << std::endl;
}

Cat &Cat::operator= (Cat const & other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound (void) const {
	std::cout << "Cat make sound : meow" << std::endl;
}
