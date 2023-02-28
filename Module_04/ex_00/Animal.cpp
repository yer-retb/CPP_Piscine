/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:24:54 by yer-retb          #+#    #+#             */
/*   Updated: 2023/02/28 02:44:20 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor call" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Animal constructor call" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &other){
	std::cout << "Animal Copy constructor call" << std::endl;
	*this = other;
}

Animal::~Animal (){
	std::cout << "Animal destructor call" << std::endl;
}

Animal &Animal::operator= (Animal const &rhs) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void Animal::makeSound (void) const {
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType(void) const{
	return (this->type);
}
